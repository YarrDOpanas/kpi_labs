
namespace Lab1
{
    /// <summary>
    /// Пользуясь интерфейсом CarBuilder, Director дает строителю указание построить продукт.
    /// </summary>
    public class Director
    {
        private CarBuilder carBuilder;

        public CarBuilder CarBuilder { set => carBuilder = value; }

        public Car GetCar() => carBuilder.Car;

        public void ConstructCar()
        {
            carBuilder.CreateNewCar();
            carBuilder.SetCarcass();
            carBuilder.SetWheel();
            carBuilder.SetCabin();
            carBuilder.SetColor();
            carBuilder.SetPrice();
        }
    }
}
