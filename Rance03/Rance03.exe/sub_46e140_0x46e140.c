// 函数: sub_46e140
// 地址: 0x46e140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u> 0xb)
    int32_t eax_34
    eax_34.b = 0
    return eax_34

int32_t* eax_19

switch (arg1)
    case 0
        *arg3 = zx.d(sub_46e450(*arg2, arg2[1]))
        uint32_t* eax_1
        eax_1.b = 1
        return eax_1
    case 1
        void* esi_1 = data_75d4e0
        int32_t edi = arg2[1]
        int32_t ebx = *arg2
        
        if (sub_46cb80(esi_1) != 0)
            int32_t* ecx_5 = *(esi_1 + 0x14)
            
            if (ecx_5 != 0)
                *arg3 = zx.d((**ecx_5)(ebx, edi))
                int32_t* eax_8
                eax_8.b = 1
                return eax_8
        
        *arg3 = 0
        int32_t* eax_4
        eax_4.b = 1
        return eax_4
    case 2
        void* esi_2 = data_75d4e0
        arg1.b = *arg2 != 0
        
        if (sub_46cb80(esi_2) != 0)
            int32_t* ecx_8 = *(esi_2 + 0x18)
            
            if (ecx_8 != 0)
                (**ecx_8)(arg1)
                *arg3 = 1
                int32_t* eax_13
                eax_13.b = 1
                return eax_13
        
    label_46e1e2:
        *arg3 = 0
        int32_t* eax_11
        eax_11.b = 1
        return eax_11
    case 3
        void* esi_3 = data_75d4e0
        
        if (sub_46cb80(esi_3) != 0)
            int32_t* ecx_10 = *(esi_3 + 0x18)
            
            if (ecx_10 != 0)
                *arg3 = zx.d((*(*ecx_10 + 4))())
                int32_t* eax_17
                eax_17.b = 1
                return eax_17
        
        goto label_46e1e2
    case 4
        sub_46e480()
        struct _EXCEPTION_REGISTRATION_RECORD** eax_18
        eax_18.b = 1
        return eax_18
    case 5
        void* esi_4 = data_75d4e0
        
        if (sub_46cb80(esi_4).b != 0)
            int32_t* ecx_13 = *(esi_4 + 0x10)
            
            if (ecx_13 != 0)
                (**ecx_13)()
                int32_t eax_21
                eax_21.b = 1
                return eax_21
        
        eax_19.b = 1
        return eax_19
    case 6
        sub_46e500(*arg2, arg2[1])
        int32_t eax_22
        eax_22.b = 1
        return eax_22
    case 7
        int32_t __saved_ebx_2 = *arg2
        *arg3 = zx.d(sub_46cc80())
        uint32_t* eax_25
        eax_25.b = 1
        return eax_25
    case 8
        *(data_75d4e0 + 0x24) = 0
        void* eax_26
        eax_26.b = 1
        return eax_26
    case 9
        void* esi_5 = data_75d4e0
        
        if (sub_46cb80(esi_5) != 0)
            int32_t* ecx_19 = *(esi_5 + 8)
            
            if (ecx_19 != 0)
                *arg3 = (*(*ecx_19 + 0xc))()
                int32_t eax_30
                eax_30.b = 1
                return eax_30
        
        *arg3 = 0
        int32_t eax_28
        eax_28.b = 1
        return 1
    case 0xa
        *arg3 = zx.d(sub_46e550(*arg2, arg2[1]))
        uint32_t* eax_32
        eax_32.b = 1
        return eax_32
    case 0xb
        long double x87_r0
        *arg3 = sub_46cd00(x87_r0, *arg2, arg2[1])
        eax_19.b = 1
        return eax_19
