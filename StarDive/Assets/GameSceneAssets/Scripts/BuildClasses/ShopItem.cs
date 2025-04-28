using UnityEngine;
using System.Collections;

[System.Serializable]
public class ShopItem {

	public string Name;

	public int Price;

	public enum ItemType 
    {
        Gun,
        ContinueButton,
        nullItem
    }

	public ItemType Item;
    
	public Texture ItemTexturePurchased;

    public Texture ItemTextureNotPurchased;

	public GUITexture GuiTextureStored;
    
    public GUIText GuiTextStored;

	public int Amount;

    public int IndexNumber;

    public Vector2 StartPositionTexture;

    public Vector2 StartPositionText;

    [Multiline]
    public string ItemTitle;

    [Multiline]
    public string ItemDescription;

    public ShopItem(int price, ItemType item, Texture itemTexturePurchased,Texture itemTextureNotPurchased, GUITexture guitexturestored, int amount, GUIText guitextstored,int indexNumber, string itemDescription,string itemTitle)
	{

		Price = price;
		Item = item;
        ItemTexturePurchased = itemTexturePurchased;            
		ItemTextureNotPurchased = itemTextureNotPurchased;
		GuiTextureStored = guitexturestored;
        GuiTextStored = guitextstored;
		Amount = amount;
        IndexNumber = indexNumber;
        ItemTitle = itemTitle;
        ItemDescription = itemDescription;

	}

}
