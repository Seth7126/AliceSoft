// 函数: $LN16
// 地址: 0x6a8219
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg3 - 4) = *(arg1 - 0x28)
__FindAndUnlinkFrame(*(arg1 - 0x2c))
uint32_t* eax = __getptd()
eax[0x22] = *(arg1 - 0x30)
uint32_t* result = __getptd()
result[0x23] = *(arg1 - 0x34)

if (*arg2 != 0xe06d7363 || arg2[4] != 3
        || (arg2[5] != 0x19930520 && arg2[5] != 0x19930521 && arg2[5] != 0x19930522))
    *(arg1 - 0x1c)
else if (*(arg1 - 0x38) == 0 && *(arg1 - 0x1c) != 0)
    result = __IsExceptionObjectToBeDestroyed(arg2[6])
    
    if (result != 0)
        int32_t var_4_2 = *(arg1 + 0x10)
        result = ___DestructExceptionObject(arg2)

return result
