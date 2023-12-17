//
// Created by 黃漢軒 on 2023/12/7.
//

#include <stdexcept>

#include "DeliveryResult.h"
#include "MailInfo.h"
#include "PromptDeliveryMail.h"

PromptDeliveryMail::PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate) : mailInfo(mailInfo) {
    this->promptDeliveryDate = promptDeliveryDate;
}

MailInfo PromptDeliveryMail::GetMailInfo(){
    return this->mailInfo;
}

DeliveryResult PromptDeliveryMail::Delivery(std::string date) {
    if (date > this->promptDeliveryDate) {
        throw std::invalid_argument("Date expired");
    }
    return DeliveryResult(this->mailInfo, date);
}