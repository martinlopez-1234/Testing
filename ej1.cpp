#include <gtest/gtest.h>

// Función que queremos probar
int Suma(int a, int b) {
    return a + b;
}

//Defino la prueba
TEST(TestSuma, TesteaSumaPositivos) 
{
    EXPECT_EQ(Suma(1, 2), 3);
    ASSERT_EQ(Suma(5, 7), 12);
}

int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}