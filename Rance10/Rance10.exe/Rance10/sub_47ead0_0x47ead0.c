// 函数: sub_47ead0
// 地址: 0x47ead0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = 0
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi

if (arg2 u> 0xb)
    sub_602420(arg1)
    return arg1

char eax_4
char eax_12

switch (arg2)
    case 0
        int32_t* edi_1 = *arg3
        int32_t eax_2 = sub_603470(&edi_1[4])
        eax_4 = sub_47ee10(sub_603470(edi_1), eax_2)
    label_47eb1f:
        int32_t ecx_3
        ecx_3.b = eax_4 != 0
        *arg1 = 0x2f
        arg1[1] = ecx_3
        return arg1
    case 1
        *arg3
        int32_t eax_7 = sub_602ff0()
        int32_t eax_8 = sub_602ff0()
        void* esi_4 = data_7fcb64
        char edx_3
        
        if (sub_47d5a0(esi_4) != 0)
            int32_t* ecx_7 = *(esi_4 + 0x14)
            
            if (ecx_7 == 0)
                goto label_47eb5b
            
            eax_12 = (**ecx_7)(eax_8, eax_7)
        label_47eb6e:
            edx_3 = eax_12
        else
        label_47eb5b:
            edx_3 = 0
        
        int32_t ecx_8
        ecx_8.b = edx_3 != 0
        *arg1 = 0x2f
        arg1[1] = ecx_8
        return arg1
    case 2
        *arg3
        char eax_15 = sub_602ea0()
        void* esi_6 = data_7fcb64
        
        if (sub_47d5a0(esi_6) != 0)
            int32_t* ecx_11 = *(esi_6 + 0x18)
            
            if (ecx_11 != 0)
                (**ecx_11)(eax_15.d)
                *arg1 = 0x2f
                arg1[1] = 1
                return arg1
        
        *arg1 = 0x2f
        arg1[1] = 0
        return arg1
    case 3
        void* esi_9 = data_7fcb64
        
        if (sub_47d5a0(esi_9) == 0)
            goto label_47eb5b
        
        int32_t* ecx_13 = *(esi_9 + 0x18)
        
        if (ecx_13 == 0)
            goto label_47eb5b
        
        eax_12 = (*(*ecx_13 + 4))()
        goto label_47eb6e
    case 4
        sub_47d690()
        *arg1 = 0
        return arg1
    case 5
        void* esi_11 = data_7fcb64
        
        if (sub_47d5a0(esi_11) != 0)
            int32_t* ecx_15 = *(esi_11 + 0x10)
            
            if (ecx_15 != 0)
                (**ecx_15)()
        
        *arg1 = 0
        return arg1
    case 6
        int32_t* edi_9 = *arg3
        int32_t* eax_28 = sub_603470(&edi_9[4])
        sub_47ee40(sub_603470(edi_9), eax_28)
        *arg1 = 0
        return arg1
    case 7
        *arg3
        eax_4 = sub_47ee90(sub_602ff0())
        goto label_47eb1f
    case 8
        *(data_7fcb64 + 0x24) = 0
        *arg1 = 0
        return arg1
    case 9
        void* esi_16 = data_7fcb64
        
        if (sub_47d5a0(esi_16) != 0)
            int32_t* ecx_22 = *(esi_16 + 8)
            
            if (ecx_22 != 0)
                int32_t eax_38 = (*(*ecx_22 + 0xc))()
                *arg1 = 0xa
                arg1[1] = eax_38
                return arg1
        
        *arg1 = 0xa
        arg1[1] = 0
        return arg1
    case 0xa
        *arg3
        int32_t eax_41 = sub_602ff0()
        eax_4 = sub_47eed0(sub_602ff0(), eax_41)
        goto label_47eb1f
    case 0xb
        *arg3
        float eax_44 = sub_602ff0()
        char var_10
        long double x87_r0
        var_10.d = sub_47d730(x87_r0, sub_602ff0(), eax_44)
        *arg1 = 0xb
        arg1[1] = var_10.d
        return arg1
