//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailSystem.h"
#include "RegisteredMail.h"

/* Add tests here */
TEST(TestMailSystem1, MailSystemPostOrdinaryMailShouldReturnCorrectSize) {
    MailSystem mailSystem;
    MailInfo mailInfo("Michael", "Michelle", "1");

    mailSystem.AddOrdinaryMail(mailInfo);

    mailSystem.PostOrdinaryMail();

    ASSERT_EQ(mailSystem.GetOrdinaryMailSize(), 0);
}

TEST(TestMailSystem2, MailSystemPostRegisteredMailShouldReturnCorrectSize) {
    MailSystem mailSystem;
    MailInfo mailInfo("Michael", "Michelle", "1");

    std::shared_ptr<IDeliverable> registeredMail = std::make_shared<RegisteredMail>(mailInfo);
    mailSystem.AddDeliverableMail(registeredMail);

    mailSystem.PostDeliverableMail("2023-12-12");

    ASSERT_EQ(mailSystem.GetDeliverableMailSize(), 0);
}