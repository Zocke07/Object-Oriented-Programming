//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailInfo.h"
#include "RegisteredMail.h"

/* Add tests here */
TEST(TestRegisteredMail1, RegisteredMailGetMailInfoShouldReturnCorrectValue) {
    MailInfo mailInfo("Alice", "Bernadetta", "1");
    RegisteredMail registeredMail(mailInfo);

    MailInfo data = registeredMail.GetMailInfo();

    ASSERT_EQ(data.GetFrom(), "Alice");
    ASSERT_EQ(data.GetTo(), "Bernadetta");
    ASSERT_EQ(data.GetMailId(), "1");
}

TEST(TestRegisteredMail2, RegisteredMailDeliveryShouldReturnCorrectValue) {
    MailInfo mailInfo("Alice", "Bernadetta", "1");
    RegisteredMail registeredMail(mailInfo);

    DeliveryResult theResult = registeredMail.Delivery("2024-01-11");

    /* Note to self:
     * registeredMail.Delivery returns DeliveryResult,
     * DeliveryResult contains mailInfo and deliveryDate,
     * mailInfo, again, contains From, To, MailId.
    */

    ASSERT_EQ(theResult.GetMailInfo().GetFrom(), "Alice");
    ASSERT_EQ(theResult.GetMailInfo().GetTo(), "Bernadetta");
    ASSERT_EQ(theResult.GetMailInfo().GetMailId(), "1");
    ASSERT_EQ(theResult.GetDeliveryDate(), "2024-01-11");
}