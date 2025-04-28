using UnityEngine;
public class CameraShake : MonoBehaviour {

		public Transform camTransform;
		public float shake = 0f;
		public float decreaseFactor = 1.0f;
        public float ShakeIntensity = 1.0f;
        public float Smoothness = 5;
        public bool Choppy = false;
		Vector3 originalPos;
	
		
		void OnEnable()
		{

			originalPos = camTransform.localPosition;

		}
		
		void Update()
		{

			if (shake > 0)
			{
              
                camTransform.localPosition = Vector3.Lerp(camTransform.localPosition, originalPos + (new Vector3( Random.insideUnitCircle.x,Random.insideUnitCircle.y,0)*shake)*ShakeIntensity,Time.deltaTime * 15);


                shake -= Time.deltaTime * decreaseFactor;

			}
			else
			{

				shake = 0f;

                camTransform.localPosition = Vector3.Lerp(camTransform.localPosition, originalPos, Time.deltaTime * 100 / Smoothness);
			}

		}

	}