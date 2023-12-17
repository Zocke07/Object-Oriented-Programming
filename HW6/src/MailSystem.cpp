//
// Created by 黃漢軒 on 2023/12/7.
//

#include "MailSystem.h"

void MailSystem::AddOrdinaryMail(OrdinaryMail mail) {
    this->ordinaryMailStorage.push_back(mail);
}

void MailSystem::AddDeliverableMail(std::shared_ptr<IDeliverable> deliverableMail) {
    this->deliverableMailStorage.push_back(deliverableMail);
}

void MailSystem::PostOrdinaryMail() {
    this->ordinaryMailStorage.pop_back();
}

DeliveryResult MailSystem::PostDeliverableMail(std::string date) {
    std::shared_ptr<IDeliverable> letter = this->deliverableMailStorage.back();
    DeliveryResult result = letter->Delivery(date);
    this->deliverableMailStorage.pop_back();
    return result;
}

size_t MailSystem::GetOrdinaryMailSize() {
    return ordinaryMailStorage.size();
}

size_t MailSystem::GetDeliverableMailSize() {
    return deliverableMailStorage.size();
}