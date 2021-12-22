#include "gtest.h"
#include "../lab3-stack/Calculator.h"

TEST(TCalculator, can_calculate_expression_not_in_postfix)
{

	TCalculator m;
	m.SetExpr("(2+2)*2");
	EXPECT_EQ(m.Calc(), 8);
}
TEST(TCalculator, can_calculate_expression_in_postfix)
{

	TCalculator m;
	m.SetExpr("(2+2)*2");
	m.ToPostfix();
	EXPECT_EQ(m.CalcPostfix(), 8);
}
TEST(TCalculator, can_create_calculator) {
	ASSERT_NO_THROW(TCalculator c);
}
TEST(TCalculator, can_calculate) {
	TCalculator c;
	c.SetExpr("1+1");
	EXPECT_EQ(2,c.Calc());
}
TEST(TCalculator, correct_plus_calculate) {
	TCalculator c;
	c.SetExpr("1+1");
	EXPECT_EQ(2,c.Calc());
}
TEST(TCalculator, correct_minus_calculate) {
	TCalculator c;
	c.SetExpr("1-1");
	EXPECT_EQ(0, c.Calc());
}
TEST(TCalculator, correct_multiply_calculate) {
	TCalculator c;
	c.SetExpr("9*3");
	EXPECT_EQ(27, c.Calc());
}
TEST(TCalculator, correct_split_calculater) {
	TCalculator c;
	c.SetExpr("9/3");
	EXPECT_EQ(3, c.Calc());
}
TEST(TCalculator, correct_power_calculater) {
	TCalculator c;
	c.SetExpr("3^2");
	EXPECT_EQ(9, c.Calc());
}
TEST(TCalculator, correct_hard_calculater) {
	TCalculator c;
	c.SetExpr("(4+3)*4/2-((3^2*2)/6)");
	double res = (4 + 3) * 4 / 2 - ((pow(3, 2) * 2) / 6);
	EXPECT_EQ(res, c.Calc());
}
TEST(TCalculator, correct_one_brackate) {
	TCalculator m;
	m.SetExpr("2+(2)");
	ASSERT_NO_THROW(m.Calc());
}
TEST(TCalculator, correct_two_brackates) {
	TCalculator m;
	m.SetExpr("(((2)+(2)))");
	ASSERT_NO_THROW(m.Calc());
}
TEST(TCalculator, uncorrect_brackate) {
	TCalculator m;
	m.SetExpr("(2+(2)");

	ASSERT_ANY_THROW(m.Calc());
}
TEST(TCalculator, uncorrect_operand) {
	TCalculator m;
	m.SetExpr("2 2");

	ASSERT_ANY_THROW(m.Calc());
}
TEST(TCalculator, uncorrect_operator) {
	TCalculator m;
	m.SetExpr("2++2");

	ASSERT_ANY_THROW(m.Calc());
}