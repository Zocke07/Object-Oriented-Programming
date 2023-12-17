//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailInfo.h"

/* Add tests here */
TEST(TestMailInfo1, MailInfoGetFromToMailIdShouldReturnCorrectValue) {
    MailInfo mailInfo1("John", "Jane", "1");
    MailInfo mailInfo2("Cindy", "Chris", "2");

    ASSERT_EQ(mailInfo1.GetFrom(), "John");
    ASSERT_EQ(mailInfo2.GetFrom(), "Cindy");
    ASSERT_EQ(mailInfo1.GetTo(), "Jane");
    ASSERT_EQ(mailInfo2.GetTo(), "Chris");
    ASSERT_EQ(mailInfo1.GetMailId(), "1");
    ASSERT_EQ(mailInfo2.GetMailId(), "2");
}