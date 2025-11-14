// 函数: sub_410a80
// 地址: 0x410a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg3
void* esi

if (*arg4 != 0)
    char* esi_1 = arg4
    
    do
        arg1 = *esi_1
        esi_1 = &esi_1[1]
    while (arg1 != 0)
    
    esi = esi_1 - &esi_1[1]
else
    esi = nullptr

sub_403000(arg3, sub_4057c0(arg2, arg4, esi))
return arg3
