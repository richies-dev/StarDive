using UnityEngine;

using System.Collections;

using System.Collections.Generic;

public class ShopGUI : MonoBehaviour
{
    #region Variables
    public ShopItem[] Items;

    public GameObject guiTextObj;

	public GameObject guiTextureObj;

    public List<GameObject> AllTextures;
        
	public List<GameObject> AllText;

	private Vector2 TexturesPosition = new Vector2(0,0);

	public Vector2 textureSize;

	public Transform parentOfTextures;

	public int AmountPerBottomRow = 5;

    public int AmountPerTopRow = 6;
    
    public Texture[] UpgradeTextures;
    
    private int fontsize = 0;

    private float ScaleSizeForFont = 50;

    public float ScaleOfShopModifier = 1.05f;

    

    private float ScaleOfShop 
    {

        get 
        {
            return ActivityController.StartScreenWidth / ScaleOfShopModifier;
        }

    }
        
    private float YPositionOfShop
    {
        get
        {
            //to center completely
            // return (ActivityController.StartScreenWidth - ScaleOfShop) / 2 ;
            //
            return 0;
        }
    }
    
    private bool TryingToBuy = false;

    private int TryingToBuyGunIndex = -1;
    
    private bool? Accept = null;

    private int lastTurret = -1;

    private bool HasAsked = false;

    public AreYouSureButtons areyousure;
    
    public FadingMaterial blackFade;

    private bool AnimatingIn = false;

    private bool AnimatingOut = false;

    private bool WriteDescription = false;
    
    public TextMesh DescriptionText;
    
    public TextMesh TitleText;

    private bool ParentOfTexturesShowedOnEnable = false;

    private enum ItemType
    {
        Ammo,
        Power,
        RateOfFire,
        MultiShot,
        HeatSeeking
    }

    public AudioSource audsrc;

    public AudioClip accept;
    public AudioClip decline;
    public AudioClip NextRound;
    #endregion Variables

    void InstantiateShop()
    {

        for (int i = 0; i < Items.Length; i++)
        {
            
            float size = AmountPerBottomRow;

            GameObject obj = (GameObject)Instantiate(guiTextureObj);

            GameObject obj2 = (GameObject)Instantiate(guiTextObj);
            
            obj.SetActive(false);

            AllTextures.Add(obj);

            AllText.Add(obj2);

            if (i < AmountPerBottomRow)
            {
                
                if (i >= 0)
                {

                    textureSize = new Vector2(ScaleOfShop / AmountPerBottomRow, ScaleOfShop / AmountPerBottomRow);

                    size = AmountPerBottomRow;
                    
                    if(i != 0)
                    {
                    
                        TexturesPosition.x += textureSize.x;
                    
                    }

                }

            }
            else if (i > AmountPerBottomRow)
            {

                size = AmountPerTopRow;
                
                TexturesPosition.x += textureSize.x;
            
            }
            else if (i == AmountPerBottomRow)
            {

                textureSize = new Vector2(ScaleOfShop / AmountPerTopRow, ScaleOfShop / AmountPerTopRow);

                TexturesPosition.y = ScaleOfShop / AmountPerBottomRow + YPositionOfShop;

                TexturesPosition.x = 0;

                size = AmountPerTopRow;

            }
            
            Items[i].IndexNumber = i;

            Items[i].GuiTextureStored = AllTextures[i].GetComponent<GUITexture>();

            Items[i].GuiTextStored = AllText[i].GetComponent<GUIText>();

            float bottomMargin = 32f;

            AllTextures[i].GetComponent<GUITexture>().pixelInset = new Rect(
                (
                ActivityController.StartScreenWidth / 2 - textureSize.x * size / 2) + TexturesPosition.x, 
                TexturesPosition.y + bottomMargin, textureSize.x, textureSize.y);

            AllText[i].GetComponent<GUIText>().fontSize = fontsize;

            AllText[i].GetComponent<GUIText>().pixelOffset = new Vector2((
                ActivityController.StartScreenWidth / 2 - textureSize.x * size / 2)
                + TexturesPosition.x + fontsize / 5, TexturesPosition.y + bottomMargin + fontsize / 5);

            AllTextures[i].GetComponent<GUITexture>().texture = Items[i].ItemTextureNotPurchased;
            
            AllTextures[i].transform.parent = parentOfTextures;

            AllText[i].transform.parent = parentOfTextures;

            AllText[i].transform.localPosition = new Vector3(0, 0, 1);

            AllText[i].SetActive(true);
            
            AllTextures[i].SetActive(true);

            Items[i].StartPositionText = Items[i].GuiTextStored.pixelOffset;

            Items[i].StartPositionTexture = new Vector2(Items[i].GuiTextureStored.pixelInset.x, Items[i].GuiTextureStored.pixelInset.y);
            
        }

    }
        
    /*
     * 
      | Shop Item Positions
      ----------------------
      |4|5|6|7|8|9|
      ======================
      |0 |1 |2 |3 |
      ----------------------
    * 
    */
    
	void Start () 
    {

        TexturesPosition.y = YPositionOfShop;

        fontsize = Mathf.RoundToInt((ActivityController.StartScreenWidth + ActivityController.StartScreenHeight) / ScaleSizeForFont);

        InstantiateShop();

        if(SavedData.current.ShowTutorial == false) return;
        
        if(SavedData.current.ShowTutorial == true) SavedData.current.ShowTutorial = null;
        
        if(SavedData.current.ShowTutorial == null)
        {
            if(SavedData.current.round < 1)
            {
                ActivityController.Paused = true;
                TryingToBuy = true;
                TryingToBuyGunIndex = 11;
            }
        }


	}
              
    void BuyUpgrade(GunStats Turret,int amountToBuy, float valueToAdd, int[] ItemPrice,int ItemIndex, ItemType itemType,int BulletTextureIndex = 0) 
    {

        if (Input.GetMouseButtonDown(0) && ActivityController.Paused == false)
        {

            if (Items[ItemIndex].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
            {

                if (ItemIndex >= AmountPerBottomRow)
                {

                    if (SavedData.current.PlayerStats.Money >= Items[ItemIndex].Price && Items[ItemIndex].Price != 0)
                    {

                        StartCoroutine(clickedItem(Items[ItemIndex]));

                    }

                }

            }

        }

        if (itemType == ItemType.Ammo)
        {

            Items[ItemIndex].Price = ItemPrice[0];

            AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[BulletTextureIndex];

            if (Input.GetMouseButtonDown(0) && ActivityController.Paused == false)
            {

                if (Items[ItemIndex].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                {

                    if (SavedData.current.PlayerStats.Money >= ItemPrice[0])
                    {

                        SavedData.current.PlayerStats.Money -= ItemPrice[0];

                        Turret.Ammo += amountToBuy;

                        return;

                    }

                }

            }

        }
        else if(itemType == ItemType.Power)
        {

            if (Turret.Power < ItemPrice.Length)
            {

                Items[ItemIndex].Price = ItemPrice[Turret.Power];

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[Turret.Power];

                if (Input.GetMouseButtonDown(0) && ActivityController.Paused == false)
                {

                    if (Items[ItemIndex].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                    {

                        if (SavedData.current.PlayerStats.Money >= ItemPrice[Turret.Power])
                        {

                            SavedData.current.PlayerStats.Money -= ItemPrice[Turret.Power];

                            Turret.Power += amountToBuy;

                            return;

                        }

                    }

                }

            }
            else
            {

                Items[ItemIndex].Price = 0;

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[4];

            }

        }
        else if (itemType == ItemType.RateOfFire)
        {


            if (Turret.RateOfFireUpgrade < ItemPrice.Length)
            {
                
                Items[ItemIndex].Price = ItemPrice[Turret.RateOfFireUpgrade];

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[Turret.RateOfFireUpgrade + 5];

                if (Input.GetMouseButtonDown(0) && ActivityController.Paused == false)
                {

                    if (Items[ItemIndex].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                    {

                        if (SavedData.current.PlayerStats.Money >= ItemPrice[Turret.RateOfFireUpgrade])
                        {

                            SavedData.current.PlayerStats.Money -= ItemPrice[Turret.RateOfFireUpgrade];

                            Turret.RateOfFireUpgrade += amountToBuy;

                            Turret.RateOfFire += valueToAdd;

                            return;

                        }

                    }

                }

            }
            else
            {

                Items[ItemIndex].Price = 0;

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[4];

            }
        }
        else if(itemType == ItemType.MultiShot)
        {

            if (Turret.MultiShot < ItemPrice.Length)
            {

                Items[ItemIndex].Price = ItemPrice[Turret.MultiShot];

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[Turret.MultiShot + 9];

                if (Input.GetMouseButtonDown(0))
                {

                    if (Items[ItemIndex].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                    {

                        if (SavedData.current.PlayerStats.Money >= ItemPrice[Turret.MultiShot])
                        {

                            SavedData.current.PlayerStats.Money -= ItemPrice[Turret.MultiShot];

                            Turret.MultiShot += amountToBuy;

                            return;

                        }

                    }

                }

            }
            else
            {

                Items[ItemIndex].Price = 0;

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[4];

            }
        }
        else if (itemType == ItemType.HeatSeeking)
        {

            if (Turret.HeatSeeking / 2 < ItemPrice.Length)
            {

                Items[ItemIndex].Price = ItemPrice[Turret.HeatSeeking / 2];

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[Turret.HeatSeeking / 2 + 14];

                if (Input.GetMouseButtonDown(0))
                {

                    if (Items[ItemIndex].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                    {

                        if (SavedData.current.PlayerStats.Money >= ItemPrice[Turret.HeatSeeking / 2])
                        {

                            SavedData.current.PlayerStats.Money -= ItemPrice[Turret.HeatSeeking / 2];

                            Turret.HeatSeeking += 2;

                            return;

                        }

                    }

                }

            }
            else
            {

                Items[ItemIndex].Price = 0;

                AllTextures[ItemIndex].GetComponent<GUITexture>().texture = UpgradeTextures[4];

            }
        }


    }

    void SelectedItem()
    {
        if (parentOfTextures.gameObject.activeSelf && Input.anyKey || lastTurret != SavedData.current.GunSelected)
        {

            if (SavedData.current.GunSelected == 0)
            {

                if(parentOfTextures.gameObject.activeSelf)
                {                                       

                    BuyUpgrade(SavedData.current.StarterTurret,1,0,new int[]{30},4,ItemType.Power);

                }

                AllTextures[5].GetComponent<GUITexture>().texture = null;

                AllTextures[6].GetComponent<GUITexture>().texture = null;
                
                AllTextures[7].GetComponent<GUITexture>().texture = null;                
                                
                AllTextures[0].GetComponent<GUITexture>().color = new Color(AllTextures[0].GetComponent<GUITexture>().color.r, AllTextures[0].GetComponent<GUITexture>().color.g, AllTextures[0].GetComponent<GUITexture>().color.b, .2f);
            
                AllTextures[1].GetComponent<GUITexture>().color = new Color(AllTextures[1].GetComponent<GUITexture>().color.r, AllTextures[1].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[2].GetComponent<GUITexture>().color = new Color(AllTextures[2].GetComponent<GUITexture>().color.r, AllTextures[2].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[3].GetComponent<GUITexture>().color = new Color(AllTextures[3].GetComponent<GUITexture>().color.r, AllTextures[3].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);
        
            }

            else if (SavedData.current.GunSelected == 1)
            {

                if (parentOfTextures.gameObject.activeSelf)
                {
                    
                    BuyUpgrade(SavedData.current.AdvancedTurret,10,0,new int[]{5},4,ItemType.Ammo,11);

                    BuyUpgrade(SavedData.current.AdvancedTurret,1,0,new int[]{45,90},5,ItemType.Power);
                    
                    BuyUpgrade(SavedData.current.AdvancedTurret, 1, .5f, new int[]{25,50,100},6,ItemType.RateOfFire);
                    
                    BuyUpgrade(SavedData.current.AdvancedTurret,1,0,new int[]{50,100},7,ItemType.MultiShot);    

                }

            
                AllTextures[0].GetComponent<GUITexture>().color = new Color(AllTextures[6].GetComponent<GUITexture>().color.r, AllTextures[0].GetComponent<GUITexture>().color.g, AllTextures[0].GetComponent<GUITexture>().color.b, .5f);
               
                AllTextures[1].GetComponent<GUITexture>().color = new Color(AllTextures[1].GetComponent<GUITexture>().color.r, AllTextures[1].GetComponent<GUITexture>().color.g, AllTextures[1].GetComponent<GUITexture>().color.b, .2f);

                AllTextures[2].GetComponent<GUITexture>().color = new Color(AllTextures[2].GetComponent<GUITexture>().color.r, AllTextures[2].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[3].GetComponent<GUITexture>().color = new Color(AllTextures[3].GetComponent<GUITexture>().color.r, AllTextures[3].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);
        
            }                
            else if (SavedData.current.GunSelected == 2)
            {
                           
                if (parentOfTextures.gameObject.activeSelf)
                {

                    BuyUpgrade(SavedData.current.LegendaryTurret,10,0,new int[]{5},4,ItemType.Ammo,11);

                    BuyUpgrade(SavedData.current.LegendaryTurret,1,0,new int[]{100,200},5,ItemType.Power);
                    
                    BuyUpgrade(SavedData.current.LegendaryTurret,1,1.2f,new int[]{50,100,300,500},6,ItemType.RateOfFire);                                
                      
                }
            
                AllTextures[7].GetComponent<GUITexture>().texture = null;
                
                AllTextures[0].GetComponent<GUITexture>().color = new Color(AllTextures[6].GetComponent<GUITexture>().color.r, AllTextures[0].GetComponent<GUITexture>().color.g, AllTextures[0].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[1].GetComponent<GUITexture>().color = new Color(AllTextures[1].GetComponent<GUITexture>().color.r, AllTextures[1].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[2].GetComponent<GUITexture>().color = new Color(AllTextures[2].GetComponent<GUITexture>().color.r, AllTextures[2].GetComponent<GUITexture>().color.g, AllTextures[2].GetComponent<GUITexture>().color.b, .2f);

                AllTextures[3].GetComponent<GUITexture>().color = new Color(AllTextures[3].GetComponent<GUITexture>().color.r, AllTextures[3].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);
        
            }
            else if (SavedData.current.GunSelected == 3)
            {

                if (parentOfTextures.gameObject.activeSelf)
                {

                    BuyUpgrade(SavedData.current.MissileLauncher,10,0,new int[]{20},4,ItemType.Ammo,11);

                    BuyUpgrade(SavedData.current.MissileLauncher,2,0,new int[]{100,200},5,ItemType.Power);

                    BuyUpgrade(SavedData.current.MissileLauncher,1,.75f,new int[]{50,100,200},6,ItemType.RateOfFire);

                    BuyUpgrade(SavedData.current.MissileLauncher,1,0,new int[]{200,500,1000},7,ItemType.HeatSeeking);
                                       
                }
                                
                AllTextures[0].GetComponent<GUITexture>().color = new Color(AllTextures[6].GetComponent<GUITexture>().color.r, AllTextures[0].GetComponent<GUITexture>().color.g, AllTextures[0].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[1].GetComponent<GUITexture>().color = new Color(AllTextures[1].GetComponent<GUITexture>().color.r, AllTextures[1].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);
          
                AllTextures[2].GetComponent<GUITexture>().color = new Color(AllTextures[2].GetComponent<GUITexture>().color.r, AllTextures[2].GetComponent<GUITexture>().color.g, AllTextures[6].GetComponent<GUITexture>().color.b, .5f);

                AllTextures[3].GetComponent<GUITexture>().color = new Color(AllTextures[3].GetComponent<GUITexture>().color.r, AllTextures[3].GetComponent<GUITexture>().color.g, AllTextures[3].GetComponent<GUITexture>().color.b, .2f);
          
            }

            lastTurret = SavedData.current.GunSelected;

        }

    }
      
	void Update () {

        if (parentOfTextures.gameObject.activeSelf == false) return;

        if(ParentOfTexturesShowedOnEnable == false)
        {
            SaveLoad.Save();
            ParentOfTexturesShowedOnEnable = true;
        }

        if (TryingToBuy == false)
        {

            SelectedItem();

            UpdateData();
        
        }

        TryingToBuyItem();
        
        if(AnimatingIn)
        {
            AnimateIn(); 
        }
        if (AnimatingOut)
        {
            AnimateOut(); 
        }
               
	}

    void UpdateData()
    {

        for (int i = 0; i < Items.Length; i++)
        {
            
            if (i < SavedData.current.ItemBought.Length)
            {

                Items[i].GuiTextStored.enabled = !SavedData.current.ItemBought[i];


                Items[i].GuiTextureStored.texture = SavedData.current.ItemBought[i] ? Items[i].ItemTexturePurchased : Items[i].ItemTextureNotPurchased;


                if (Input.GetMouseButtonDown(0) && ActivityController.Paused == false )
                {

                    if (Items[i].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                    {
                        if (areyousure.Animating == false)
                        {

                            if (SavedData.current.ItemBought[i])
                            {

                                SavedData.current.GunSelected = i;

                            }
                            else if (SavedData.current.PlayerStats.Money >= Items[i].Price)
                            {

                                TryingToBuy = true;

                                TryingToBuyGunIndex = i;

                            }

                        }                 
                                           
                    }

                }

            }

            if (Input.GetMouseButtonDown(0) && ActivityController.Paused == false)
            {

                if (Items[i].GuiTextureStored.pixelInset.Contains(Input.mousePosition))
                {

                    if (Items[i].Item == ShopItem.ItemType.ContinueButton)
                    {

                        if (EquippedWeapon.TurretEquipped.GunType.Ammo <= 0)
                        {
                            TryingToBuyGunIndex = 10;
                            TryingToBuy = true;
                        }
                        else
                        {

                            StartNextRound();

                        }

                    }
                    else
                    {

                        if (Items[i].IndexNumber >= AmountPerBottomRow)
                        {

                            if (SavedData.current.PlayerStats.Money >= Items[i].Price && Items[i].Price != 0)
                            {

                                StartCoroutine(clickedItem(Items[i]));

                            }

                        }

                    }

                }

            }                       

            if (Items[i].GuiTextureStored.texture != null)
            {

                if (Items[i].Price > 0)
                {

                    Items[i].GuiTextStored.text = ("$" + Items[i].Price);

                }

                else
                {

                    Items[i].GuiTextStored.text = ("");

                }

            }

            else
            {

                Items[i].GuiTextStored.text = ("");

            }


        }

    }
    
    void TryingToBuyItem() 
    {
        
        if(TryingToBuy == false)
        {        

            HasAsked = false;
                        
            Accept = null;
                    
        }
        
        if (TryingToBuy)
        {

            if(HasAsked == false)
            {

                AnimatingOut = false;
                AnimatingIn = true;

                areyousure.AnimateOut = false;
                areyousure.AnimateIn = true;

                blackFade.FadeOut = false;
                blackFade.StartFade = true;



                HasAsked = true;

            }

            if(WriteDescription == false)
            {

                StopAllCoroutines();
                
                StartCoroutine(ItemDescriptionText.AnimateText(Items[TryingToBuyGunIndex].ItemTitle, .01f, TitleText));
                
                StartCoroutine(ItemDescriptionText.AnimateText(Items[TryingToBuyGunIndex].ItemDescription, .01f, DescriptionText));
                
                WriteDescription = true;
            
            }

            Accept = areyousure.CheckForInput();
                        
            if (Accept != null)
            {
                StopAllCoroutines();
                if(Accept == true)
                {
                    audsrc.PlayOneShot(accept);
                }
                else 
                {
                    audsrc.PlayOneShot(decline);
                }

                if (TryingToBuyGunIndex != 10 && TryingToBuyGunIndex != 11)
                {
                    if (Accept == true)
                    {
                    
                        SavedData.current.PlayerStats.Money -= Items[TryingToBuyGunIndex].Price;

                        SavedData.current.ItemBought[TryingToBuyGunIndex] = true;

                        SavedData.current.GunSelected = TryingToBuyGunIndex;
                    
                        SelectedItem();
                    
                        TryingToBuy = false;

                    }
                    else if (Accept == false)
                    {
                                        
                        TryingToBuy = false;

                    }
                
                    StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f,TitleText));

                    StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f,DescriptionText));

                    areyousure.AnimateIn = false;

                    areyousure.AnimateOut = true;

                    AnimatingIn = false;
                
                    AnimatingOut = true;

                    blackFade.FadeOut = true;
                
                    blackFade.StartFade = true;
                                
                    WriteDescription = false;

                }
                else if (TryingToBuyGunIndex == 10)
                {
                    if(Accept == true)
                    {
                        StartNextRound();

                        TryingToBuy = false;

                    }
                    else if (Accept == false)
                    {

                        TryingToBuy = false;

                    }

                    StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f, TitleText));

                    StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f, DescriptionText));

                    areyousure.AnimateIn = false;

                    areyousure.AnimateOut = true;

                    AnimatingIn = false;

                    AnimatingOut = true;

                    blackFade.FadeOut = true;

                    blackFade.StartFade = true;

                    WriteDescription = false;
                }
                else if(TryingToBuyGunIndex == 11)
                {
                    if (Accept == true)
                    {

                        SavedData.current.ShowTutorial = true;

                        SavedData.current.round = -1;
                        
                        SaveLoad.Save();
                        
                        TryingToBuy = false;
                        
                    }
                    else if (Accept == false)
                    {
                        SavedData.current.ShowTutorial = false;
                        ActivityController.Paused = false;
                        TryingToBuy = false;                        
                        SavedData.current.round = 0;
                    }

                    StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f, TitleText));

                    StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f, DescriptionText));

                    areyousure.AnimateIn = false;

                    areyousure.AnimateOut = true;

                    AnimatingIn = false;

                    AnimatingOut = true;

                    blackFade.FadeOut = true;

                    blackFade.StartFade = true;

                    WriteDescription = false;
                }
            }

        }
    
    }

    IEnumerator clickedItem(ShopItem x) 
    {

        x.GuiTextureStored.color = new Color(x.GuiTextureStored.color.r, x.GuiTextureStored.color.g, x.GuiTextureStored.color.b,.13f);

        yield return new WaitForSeconds(.1f);

        x.GuiTextureStored.color = new Color(x.GuiTextureStored.color.r, x.GuiTextureStored.color.g, x.GuiTextureStored.color.b, .45f);

    }

    void AnimateOut()
    {
        
        for (int i = 0; i < Items.Length; i++)
        {

            Items[i].GuiTextureStored.enabled = true;

            Items[i].GuiTextStored.enabled = true;

            //Animation
            //if (Items[i].GuiTextureStored.pixelInset.y < Items[i].StartPositionTexture.y)
            //{
            //    Items[i].GuiTextureStored.pixelInset = new Rect(Items[i].GuiTextureStored.pixelInset.x, Items[i].GuiTextureStored.pixelInset.y + ActivityController.StartScreenHeight * 1.2f * Time.deltaTime, Items[i].GuiTextureStored.pixelInset.width, Items[i].GuiTextureStored.pixelInset.height);
            //    Items[i].GuiTextStored.pixelOffset = new Vector2(Items[i].GuiTextStored.pixelOffset.x, Items[i].GuiTextStored.pixelOffset.y + ActivityController.StartScreenHeight * 1.2f * Time.deltaTime);
            //    if (Items[i].GuiTextureStored.pixelInset.y >= Items[i].StartPositionTexture.y)
            //    {                    
            //        Items[i].GuiTextStored.pixelOffset = Items[i].StartPositionText;
                   
            //        Items[i].GuiTextureStored.pixelInset = new Rect(Items[i].GuiTextureStored.pixelInset.x, Items[i].StartPositionTexture.y, Items[i].GuiTextureStored.pixelInset.width, Items[i].GuiTextureStored.pixelInset.height);
            //        if(i >= Items.Length - 1)
            //        {
            //            AnimatingOut = false;
            //        }
            //    }

            //}
        
        }
        AnimatingOut = false;
    }

    void AnimateIn()
    {

        for (int i = 0; i < Items.Length; i++ )
        {


            Items[i].GuiTextureStored.enabled = false;

            Items[i].GuiTextStored.enabled = false;
            
            //Animation
            //if (Items[i].GuiTextureStored.pixelInset.y > 0 - Items[i].GuiTextureStored.pixelInset.height)
            //{

            //    Items[i].GuiTextureStored.pixelInset = new Rect(Items[i].GuiTextureStored.pixelInset.x, Items[i].GuiTextureStored.pixelInset.y - ActivityController.StartScreenHeight * Time.deltaTime, Items[i].GuiTextureStored.pixelInset.width, Items[i].GuiTextureStored.pixelInset.height);

            //    Items[i].GuiTextStored.pixelOffset = new Vector2(Items[i].GuiTextStored.pixelOffset.x, Items[i].GuiTextStored.pixelOffset.y - ActivityController.StartScreenHeight * Time.deltaTime);

            //}
            //else 
            //{

            //    if (i >= Items.Length - 1)
            //    {

            //        AnimatingIn = false;
                
            //    }

            //}
                    
        }
        AnimatingIn = false;
    }

    public void ChangeItemImagePosition(int index, Vector3 position)
    {
        Items[index].GuiTextureStored.transform.localPosition = position;
    }

    public void ChangeItemTextPosition(int index, Vector3 position)
    {
        Items[index].GuiTextStored.transform.localPosition = position;
    }

    public void StartNextRound()
    {

        audsrc.PlayOneShot(NextRound);

        SaveLoad.Save();

        ActivityController.NewRound = true;
        
        EnemyController.IsSpawning = true;

        ParentOfTexturesShowedOnEnable = false;

        parentOfTextures.gameObject.SetActive(false);
    }

}
