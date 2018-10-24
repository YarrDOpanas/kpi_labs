
namespace Lab1
{
    /// <summary>
    /// Конструирует стандартный вариант автомобиля собирая его из частей. 
    /// </summary>
    public class StandartCarBuilder : CarBuilder
    {
        public override void SetCabin()
        {
            Car.Cabin = Cabin.Cloth;
        }

        public override void SetCarcass()
        {
            Car.Carcass = Carcass.Plastic;
        }

        public override void SetColor()
        {
            Car.Color = Color.White;
        }

        public override void SetWheel()
        {
            Car.Wheels = Wheels.Steel;
        }

        public override void SetPrice()
        {
            Car.Price = 304_900m;
        }

    }
}
