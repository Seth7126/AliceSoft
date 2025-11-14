// 函数: sub_431540
// 地址: 0x431540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_5

if (arg3 == 0x26)
    eax_5 = arg1[0x3b] - 1
else
    if (arg3 != 0x28)
        return DefWindowProcA(arg2, 0x100, arg3, arg4)
    
    eax_5 = arg1[0x3b] + 1

(*(*arg1 + 0x9c))(eax_5)
sub_4315f0(arg1)
return 0
