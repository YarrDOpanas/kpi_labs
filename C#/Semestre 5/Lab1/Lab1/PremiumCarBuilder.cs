
namespace Lab1
{
    /// <summary>
    /// Конструирует премиумный вариант автомобиля собирая его из частей. 
    /// </summary>
    public class PremiumCarBuilder : CarBuilder
    {
        public override void SetCabin()
        {
            Car.Cabin = Cabin.Leather;
        }

        public override void SetCarcass()
        {
            Car.Carcass = Carcass.Aluminum;
        }

        public override void SetColor()
        {
            Car.Color = Color.Black;
        }

        public override void SetWheel()
        {
            Car.Wheels = Wheels.Aluminum;
        }

        public override void SetPrice()
        {
            Car.Price = 1_541_838m;
        }
    }
}
