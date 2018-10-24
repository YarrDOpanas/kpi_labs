
namespace Lab1
{
    /// <summary>
    /// Предоставляет набор абстрактных методов для создания Автомобиля 
    /// из частей и получения готового результата.
    /// </summary>
    public abstract class CarBuilder
    {
        public Car Car { get; private set; }

        public void CreateNewCar() { Car = new Car (); }

        public abstract void SetWheel();

        public abstract void SetCabin();

        public abstract void SetCarcass();

        public abstract void SetColor();

        public abstract void SetPrice();

    }
}
