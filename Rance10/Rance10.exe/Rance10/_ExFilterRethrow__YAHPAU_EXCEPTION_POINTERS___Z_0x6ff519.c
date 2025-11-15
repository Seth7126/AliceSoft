// 函数: ?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z
// 地址: 0x6ff519
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = *arg1

if (*eax_1 != 0xe06d7363 || eax_1[4] != 3
        || (eax_1[5] != 0x19930520 && eax_1[5] != 0x19930521 && eax_1[5] != 0x19930522)
        || eax_1[7] != 0)
    return 0

*(sub_702f40() + 0x20) = 1
return 1
