#pragma once
#include "communication/create_payment.hpp"
#include "communication/mining_task.hpp"
MiningTask parse_mining_task(const std::vector<uint8_t>& s);
PaymentCreateMessage parse_payment_create(const std::vector<uint8_t>& s);
