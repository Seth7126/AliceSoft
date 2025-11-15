// 函数: sub_44f2b0
// 地址: 0x44f2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = 0

if (arg2 u> 0x13)
    sub_602420(arg1)
    return arg1

char eax_7
char edx

switch (arg2)
    case 0
        int32_t ecx
        ecx.b = sub_4500a0() != 0
        *arg1 = 0xa
        arg1[1] = ecx
        return arg1
    case 1
        int32_t xmm0_1 = *(data_7fcb4c + 0x2c)
        *arg1 = 0xb
        arg1[1] = xmm0_1
        return arg1
    case 2
        *arg3
        eax_7 = ___std_fs_copy_file@12(sub_602ff0())
    label_44f336:
        int32_t ecx_3
        ecx_3.b = eax_7 != 0
        *arg1 = 0x2f
        arg1[1] = ecx_3
        return arg1
    case 3
        *arg3
        sub_603140()
        eax_7 = sub_44fe30()
        goto label_44f336
    case 4
        void* ecx_5 = *(data_7fcb4c + 0x18)
        
        if (ecx_5 != 0)
            int32_t* ecx_6 = *(ecx_5 + 0x80)
            
            if (ecx_6 != 0 && (*(*ecx_6 + 0x10))() != 0)
                *arg1 = 0x2f
                arg1[1] = 1
                return arg1
        
        *arg1 = 0x2f
        arg1[1] = 0
        return arg1
    case 5
        *arg3
        int32_t eax_17 = sub_602ff0()
        int32_t eax_18 = sub_602ff0()
        void* ecx_9 = data_7fcb4c
        *(ecx_9 + 0xc) = eax_18
        *(ecx_9 + 0x10) = eax_17
        *arg1 = 0
        return arg1
    case 6
        *arg3
        char eax_21 = sub_602ea0()
        void* esi_1 = data_7fcb4c
        int32_t ebx
        ebx.b = eax_21
        
        if (*(esi_1 + 0x1c) != ebx.b)
            if (ebx.b == 0)
                void* ecx_11 = *(esi_1 + 0x18)
                
                if (ecx_11 != 0)
                    sub_452290(ecx_11 + 0x44)
            
            *(esi_1 + 0x1c) = ebx.b
        
        *arg1 = 0x2f
        arg1[1] = 1
        return arg1
    case 7
        edx = *(data_7fcb4c + 0x1c)
    label_44f430:
        int32_t ecx_13
        ecx_13.b = edx != 0
        *arg1 = 0x2f
        arg1[1] = ecx_13
        return arg1
    case 8
        sub_44f620()
        *arg1 = 0
        return arg1
    case 9
        *arg3
        char eax_27 = sub_602ea0()
        void* esi_2 = data_7fcb4c
        
        if (*(esi_2 + 0x49) != eax_27)
            *(esi_2 + 0x49) = eax_27
            
            if (eax_27 != 0)
                int32_t* ecx_15 = *(esi_2 + 0x3c)
                *(esi_2 + 0x40) = 0
                *(esi_2 + 0x44) = (**ecx_15)()
        
        *arg1 = 0
        return arg1
    case 0xa
        edx = *(data_7fcb4c + 0x49)
        goto label_44f430
    case 0xb
        *arg3
        *(data_7fcb4c + 0x48) = sub_602ea0()
        *arg1 = 0
        return arg1
    case 0xc
        edx = *(data_7fcb4c + 0x48)
        goto label_44f430
    case 0xd
        *arg3
        *(data_7fcb4c + 0x50) = sub_602ea0()
        *arg1 = 0
        return arg1
    case 0xe
        edx = *(data_7fcb4c + 0x50)
        goto label_44f430
    case 0xf
        *arg3
        *(data_7fcb4c + 0x51) = sub_602ea0()
        *arg1 = 0
        return arg1
    case 0x10
        edx = *(data_7fcb4c + 0x51)
        goto label_44f430
    case 0x11
        *arg3
        *(data_7fcb4c + 0x52) = sub_602ea0()
        *arg1 = 0
        return arg1
    case 0x12
        edx = *(data_7fcb4c + 0x52)
        goto label_44f430
    case 0x13
        *arg1 = 0xa
        arg1[1] = 0
        return arg1
