// 函数: sub_54a900
// 地址: 0x54a900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = *(arg1 + 4)

if (i != *(arg1 + 8))
    int32_t ebx
    ebx.b = arg10
    ebx:1.b = arg4
    
    do
        void* ecx = *i
        i = &i[1]
        ebx.b = arg2
        *(ecx + 0xbc) = ebx.b
        ebx.b = arg3
        *(ecx + 0xc0) = arg5
        *(ecx + 0xbd) = ebx.b
        ebx.b = arg10
        *(ecx + 0xc4) = arg6
        *(ecx + 0xbe) = ebx:1.b
        *(ecx + 0xc8) = arg7
        *(ecx + 0xcc) = arg8
        *(ecx + 0xd0) = arg9
        *(ecx + 0xe4) = ebx.b
    while (i != *(arg1 + 8))

return i
