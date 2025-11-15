// 函数: sub_41cce0
// 地址: 0x41cce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_2 = *(arg1 + 0x14)

if (ecx_2 == 0)
    return 

if (arg2 - 0x800 u> 0xa)
    return 

switch (arg2)
    case 0x800
        *(ecx_2 + 0xc) = arg4
        sub_41da10(ecx_2)
    case 0x801
        *(ecx_2 + 0xc) = 0
    case 0x802
        sub_41cf50(ecx_2, arg2)
    case 0x803
        LPARAM var_14_2 = arg4
        WPARAM var_18_1 = arg3
        
        if (sub_41edf0(ecx_2).b != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** eax = *(ecx_2 + 0x10)
            
            if (eax != 0xffffffff)
                int32_t var_14_3 = *(ecx_2 + 0x14)
                sub_41da40(ecx_2, eax)
                *(ecx_2 + 0x10) = 0xffffffff
                *(ecx_2 + 0x14) = 0xffffffff
    case 0x804
        sub_41d080(ecx_2, arg2, arg3, arg4)
    case 0x805
        int32_t* ecx_1 = *(*(ecx_2 + 4) + 4)
        void* eax_6
        
        if (ecx_1 != 0)
            eax_6 = (*(*ecx_1 + 0x10))()
        else
            eax_6.b = 1
        
        WPARAM wParam
        wParam.b = eax_6.b != 0
        SendMessageA(*(ecx_2 + 0xc), arg2, wParam, 0)
    case 0x806
        sub_41d1b0(ecx_2, arg3)
    case 0x807
        sub_41d230(ecx_2)
    case 0x809
        sub_41d410(ecx_2, arg2)
    case 0x80a
        sub_41ef40(ecx_2, arg3)
