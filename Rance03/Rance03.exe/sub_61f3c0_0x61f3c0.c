// 函数: sub_61f3c0
// 地址: 0x61f3c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[8] != 0)
    if (sub_61f420(arg1) == 0)
        return 0xffffffff
else
    char eax = sub_61f480(arg1, 0)
    char eax_2
    
    if (eax != 0)
        while (WaitForSingleObject(arg1[0x10], 1) != WAIT_OBJECT_0)
            sub_61f7b0(arg1)
        
        eax_2 = sub_61f720(arg1)
    
    if (eax == 0 || eax_2 == 0)
        return 0xffffffff

return 0
