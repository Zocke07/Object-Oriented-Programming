//
// Created by 黃漢軒 on 2023/12/7.
//

#include "DeliveryResult.h"
#include "MailInfo.h"
#include "RegisteredMail.h"

RegisteredMail::RegisteredMail(MailInfo mailInfo) : mailInfo(mailInfo) {

}

MailInfo RegisteredMail::GetMailInfo(){
    return this->mailInfo;
}

DeliveryResult RegisteredMail::Delivery(std::string date) {
    return DeliveryResult(this->mailInfo, date);
}