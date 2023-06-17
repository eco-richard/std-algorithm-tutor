#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <vector>

#include <algorithms-tutor.hpp>

TEST(ForEachTest, TestOutcome) {
  auto res = exercise_04_for_each();
  std::vector<int> sol{2, 3, 4, 5, 6};

  ASSERT_EQ(res.size(), sol.size());
  for (std::size_t i = 0; i < res.size(); ++i) {
    EXPECT_EQ(res[i], sol[i]);
  }
}
