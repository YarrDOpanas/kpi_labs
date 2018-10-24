
namespace Lab1
{
    /// <summary>
    /// Класс Автомобиль состоит из колес, салона, кузова, цвета и цены
    /// </summary>
    public class Car
    {
        public Wheels Wheels { get; set; }

        public Color Color { get; set; }

        public Cabin Cabin { get; set; }

        public Carcass Carcass { get; set; }

        public decimal Price { get; set; }

    }

    public enum Wheels
    {
        Steel,
        Aluminum,
        Composite
    }

    public enum Cabin
    {
        Cloth,
        Leather
    }

    public enum Carcass
    {
        Plastic,
        Aluminum,
        Composite
    }

    public enum Color
    {
        White,
        Black,
        Red,
        Green,
        Blue,
        Yellow
    }
  
}
