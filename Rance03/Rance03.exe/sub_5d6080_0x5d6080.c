// 函数: sub_5d6080
// 地址: 0x5d6080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sys43vm::CPage::VTable** result = sub_5d57c0(arg1 + 0x1c)

if (result == 0)
    result.b = 0
    return result

int32_t eax = sub_5d5dc0(arg1)
*arg3 = eax
*(*(arg1 + 8) + (eax << 2)) = result
return sub_5d3920(result, *(arg2 + 0x2c), arg2 + 0x3c, *(arg2 + 0x30)) != 0
