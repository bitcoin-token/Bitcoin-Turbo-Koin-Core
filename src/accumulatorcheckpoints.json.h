// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2019 The BTK developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BTK_ACCUMULATORCHECKPOINTS_JSON_H
#define BTK_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 100,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  },\n"
            "  {\n"
            "    \"height\": 3000,\n"
            "    \"1\": \"6ce5210dbd28db746d69d4fcd65dddf124bbff3cb2db2f4d86af87893f4da3bacf1abb10d18305582f16b8154684462acaca4bfb68f4b3f38237b7fad87bcd2427eebe2ee2676a3f08ac957046adf81229155da8d9835a93682250ded86a90aa643bbcbf5ef93d507c83cd077b5da2a0d1324528da343ea5f32217d8817ac42b14c0153630e17ee7f0054f6480bb9ae418358949c65101461db5d51c2ceb907e9914748cb63eb1d50794a38c04dbe4bc9801ce7e7c6ccbdaa2f0367111e48c6de1c6d7a5b8b99f1a9b78a35ccbe022ddcdee0fffb2120291171c8a4adc9f0b04b471b8ca9b7626680db0bbd860466e296174696376647afc1ac7fab7810a0f85\",\n"
            "    \"5\": \"3039d876d065781f2e18d97c2c36d59c201752e2b0d2cd65d04f66a75bc284b5e0c5a97a0811bf03a226e3e22e4b35e974d0362eeb13a9d1f6ac8841cc70240dba96557d655fdcaf12066408215994bfbe2fbf9099875329dfd836a4f042ae8420a342a0ee6453de46d9237a304d0db6e71990a52a67ba71f97d2769df92ba2e5a4f5a3aad7e67a10a46be3e5841042f31a50842bf6f81e78428be29de5425f20bc74d20c54e34252d69503da9b9fc6fe12960b2d77e8688cc7b13df635179892e1867d775e0f37857bf25a2130f05ae1cd2b1c81a86dacc3466d22623116f77c311ae36c1657a87d0fb9aaf11cef653de3db1ca8798590b46636ea981198302\",\n"
            "    \"10\": \"552f6287ad117dadfd458a4c6153b665e3b5e56da8262e74dbb674a6b4cfd29c6ee7bca3f4301a0d9f18447e9fe8faf5ba8a552157f3883e4ce1dbfd5f57ea217c632dd6ff30b04dd690b67246ca63ceb4502b2c9bd327def1422e7c1c40318a05f956cdc9b8fed360b3420d8adea4e301f7355e5572e33b462f3d802f83ce548e04f1e73729f370ea6859eee324858e2b72b3e586372d2281b4ecb2be397418fc7111fdb96f97d48e3c58222b9ce7f0a4406a79e216543c7b1afb800f7c961106c72e1a260c72c96e54646c2ce4f5789ec66241bb3aaa273c9088ba05e2a300825435ccb58863d3cfe32130406e3f406813e71c62fb9a9a44fe66706bec0d26\",\n"
            "    \"50\": \"31e0b041f619c3e805f1f2aaff11e6b867b483af62a24788dfb8002025aa340d02c2edbfbc632dbc3dc658eb6e7979340a62697536b7b35ddfee42d7b0b78f317073166f42594994d009f6c4ad5d30ea4885402dcb91ccc46d6efd538b2045efa06cda04c371b15e566120552416bc2e011510b2f6f65b41d965a898f0bb643a936bbe6ea06918a04448b001fa1e8cc14b989e855d95273daa5610b676940206ae0bb06b5c152273877e716d8a3e048b35f93992523ceaa26a44e604ce9ce2e8608b90a50c19aa69eb5c508eb8ebfa9ad5188c3f95bb0a715b6715ba8844cabc9b453bd92733a67af0a610513b3d43d01a95ba34bb37ca378984a4521953df17\",\n"
            "    \"100\": \"bf3598117518d263682793946bbddfb4cf6998fce010c5fb135c62f87b3e8ca6b83b1933563401e41954d43792b1c7082196d8196e4bee74bfd2ecb85cda79733c79402f07f45d1c921f5dd21514ccc2ecf195d5235b305e548607608a0c7db9d58cc3080e43f5ed041f5e9d87e00015e5b2102579382391412cf69aa80e4bacac2e78e523a994c70041fe112e81551a1f32a34d536b5b9d06be67a9e2450ead8d44ca116b51d6fa5ecd8f7d8b8ce2d6d5780949e53fab4628c4d457e326ec4a9e33640000678124f5fd0536c61cb757e01c413ac96cd2464b198f1f45af2f77d6787bf0cf3657dc8fb3751ecd496f9492f4a68596d0c6763f400b0a32f539be\",\n"
            "    \"500\": \"27e8b4c94728983f5bf45018ad8eedfa7e9ae203cf6168376e1eb6b07712f44e429de93c294424a77f0f2dfbd267303ec48371493f46d8f2fc38bd74efd78cb596871780e88d2ce0c509d2d753ac0d8c08ca970623b6fcee72ae696c340faa03e567527d1f2ad5157a2f3cc1942b4c49c7065c6bfa8a5c4060cb4d9bcf53ca41eb6c791895052417daae2ff876c0661df4342839cb1e60426d0eb693462ac0ee3e645e63504fb690cc8a5a4cbc4c59a0f7bed1f404ffe03e9e78470dca1fd82e3fbdb4e48f0732e645e157d2d3b363aaa0fb71213e9d1a66d7f32292afbe2b435c019790e99a833c0420ca40580b68334616b7964cb24cc98c33292cf2c002cf\",\n"
            "    \"1000\": \"9d9979eb21b8c5c68217bcdac0f702e0731e0566c79c282f45db5ded97a496b07feca7772ad27de6cec0d4fda402ef4726f638cd19e11d41814d6b1a95c206602a8ba5e7c0f37de8a76b91bbbde38fa6445b6eb0f2ae66f8d29b85525a7524cae2ba3031778e655e09c80aa071a4808c52f58d046b255b531d21468c54daf2a30dec5d73b0cc7167a4115bef9e508ca1aa0dfad5b3b44cf5c0eae0b40db66ec8e2b4dbf816bfacdbb6b723cb5392701076b9401854b18ea5b59a45be62e0c46d5576ec1d4e953b198cb21d40627e2691138a5b1b31842e68fd03049f6abb4302ae2a0dfa46608f98d48936bcf9d9a62c40bb7b67ee925c513431e558e5e1bdbb\",\n"
            "    \"5000\": \"b17a6003314b6ad4a1d1f65eddabba5603079b6adb0eac1b6169a501f9189d540aeced2b7e7397d6d9bb48bef5462ae06b577f0c730f31e9660b6414808e18ce721c09cb6c03ba8e9c36b05de74d56c57dfde35a68bc4f69ab5ac15e65c4b4bc07f7303c61972b6754b58eb46c5fd03de347137ae834683a136aa85e6ed7326a2daa2990754dc8716d27df57c93d736734521ef38c5c811ecfb77eb80adabf12f127a647c7108ea17daaaf8f88e8557a01a779b9a35f20b8b907b7d391152593a8f387187f6416ff302b2d107ab9012237f965cd0c39135cb8ae32ae4c751ebdef64f07337b421ee72ac5dc3981c80f23fe0a9e3b0a5b4ddc7534b3571c42498\"\n"
            "  }\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //BTK_ACCUMULATORCHECKPOINTS_JSON_H
