//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "OrdinaryMail.h"

/* Add tests here */
TEST(TestOrdinaryMail1, OrdinaryMailGetMailInfoShouldReturnCorrectValue) {
    MailInfo mailInfo("Alex", "Bob", "1");
    OrdinaryMail ordinaryMail(mailInfo);

    MailInfo data = ordinaryMail.GetMailInfo();
    ASSERT_EQ(data.GetFrom(), "Alex");
    ASSERT_EQ(data.GetTo(), "Bob");
    ASSERT_EQ(data.GetMailId(), "1");
}