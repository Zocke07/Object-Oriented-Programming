//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailInfo.h"
#include "PromptDeliveryMail.h"

/* Add tests here */
TEST(TestPromptDeliveryMail1, PromptDeliveryMailGetMailInfoShouldReturnCorrectValue) {
    MailInfo mailInfo("Celine", "Diana", "1");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2024-01-10");

    ASSERT_EQ(promptDeliveryMail.GetMailInfo().GetFrom(), "Celine");
    ASSERT_EQ(promptDeliveryMail.GetMailInfo().GetTo(), "Diana");
    ASSERT_EQ(promptDeliveryMail.GetMailInfo().GetMailId(), "1");
}

TEST(TestPromptDeliveryMail2, PromptDeliveryMailDelivertShouldReturnCorrectValue) {
    MailInfo mailInfo("Celine", "Diana", "1");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2024-01-10");

    DeliveryResult deliveryResult = promptDeliveryMail.Delivery("2023-12-12");

    ASSERT_EQ(deliveryResult.GetDeliveryDate(), "2023-12-12");
}

TEST(TestPromptDeliveryMail3, PromptDeliveryMailInvalidDelivertShouldThrow) {
    MailInfo mailInfo("Celine", "Diana", "1");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-10");

    ASSERT_THROW(promptDeliveryMail.Delivery("2023-12-12"), std::invalid_argument);
}