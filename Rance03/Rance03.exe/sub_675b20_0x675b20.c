// 函数: sub_675b20
// 地址: 0x675b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg1

if (arg3 u<= 0x115)
    void* ecx_4
    
    switch (arg3)
        case 1
            sub_675ea0(arg1, arg2)
            return 0
        case 2
            sub_653100(arg1)
            return 0
        case 5
            LPARAM var_14 = arg5
            sub_676130(arg1, arg2, arg3)
            return 0
        case 0xf
            sub_676050(arg1, arg2)
            return 0
        case 0x114
            ecx_4 = arg1 + 0x1a4
            goto label_675baa
        case 0x115
            ecx_4 = arg1 + 0x188
        label_675baa:
            sub_670690(ecx_4, zx.d(arg4.w))
            sub_6761a0(arg1, *(arg1 + 0x44))
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_675d80(arg1, arg2)
            return 0
        case 0x201
            sub_675e30(arg1)
            return 0
        case 0x202
            uint32_t eax_8
            eax_8.b = *(arg1 + 0x170)
            *(arg1 + 0x171) = eax_8.b
            *(arg1 + 0x170) = 0
            return 0
        case 0x2a3
            *(arg1 + 0x184) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
