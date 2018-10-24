using System;

namespace Lab1
{
    class Program
    {
        static void Main(string[] args)
        {
            var director = new Director();
            var standartCarBuilder = new StandartCarBuilder();
            director.CarBuilder = standartCarBuilder;
            director.ConstructCar();
            var standartCar = director.GetCar();
        }
    }
}
