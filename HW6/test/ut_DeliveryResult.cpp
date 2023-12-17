//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailInfo.h"
#include "DeliveryResult.h"

/* Add tests here */
TEST(TestDeliveryResult1, DeliveryResultGetMailInfoShouldReturnCorrectValue) {
    MailInfo mailInfo("Abigail", "Billy", "1");
    DeliveryResult deliveryResult(mailInfo, "2024-01-12");

    ASSERT_EQ(deliveryResult.GetMailInfo().GetFrom(), "Abigail");
    ASSERT_EQ(deliveryResult.GetMailInfo().GetTo(), "Billy");
    ASSERT_EQ(deliveryResult.GetMailInfo().GetMailId(), "1");
}

TEST(TestDeliveryResult2, DeliveryResultGetDeliveryDateShouldReturnCorrectValue) {
    MailInfo mailInfo("Abigail", "Billy", "1");
    DeliveryResult deliveryResult(mailInfo, "2024-01-12");

    ASSERT_EQ(deliveryResult.GetDeliveryDate(), "2024-01-12");
}