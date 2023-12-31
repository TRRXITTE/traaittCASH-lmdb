// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2020, The traaittPlatform Developers
// Copyright (c) 2020, The traaittPlatform Developers
// 
// Please see the included LICENSE file for more information.

#pragma once

#include <WalletBackend/WalletBackend.h>

#include <zedwallet++/ParseArguments.h>

std::shared_ptr<WalletBackend> openWallet(const Config &config);

std::shared_ptr<WalletBackend> importViewWallet(const Config &config);

std::shared_ptr<WalletBackend> importWalletFromKeys(const Config &config);

std::shared_ptr<WalletBackend> importWalletFromSeed(const Config &config);

std::shared_ptr<WalletBackend> createWallet(const Config &config);

Crypto::SecretKey getPrivateKey(const std::string outputMsg);

std::string getNewWalletFileName();

std::string getExistingWalletFileName(const Config &config);

std::string getWalletPassword(const bool verifyPwd, const std::string msg);

void viewWalletMsg();

void promptSaveKeys(const std::shared_ptr<WalletBackend> walletBackend);
