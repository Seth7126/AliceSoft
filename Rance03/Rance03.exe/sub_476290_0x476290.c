// 函数: sub_476290
// 地址: 0x476290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** var_4_1 = arg1

if (arg2 != 0)
    void** esi_1 = sub_470650(&arg1[0xf], arg3)
    
    if (esi_1 != 0)
    label_4762f0:
        bool cond:0_1 = sub_477260(arg2, arg3, esi_1) != 0
        void* eax_5 = *esi_1
        
        if (cond:0_1)
            (*(eax_5 + 4))()
            int32_t eax_6 = sub_476fb0(&arg1[1], arg3)
            
            if (eax_6 s< 0)
                int32_t eax_7
                eax_7.b = *(arg2 i+ 8) == 0
                eax_6 = eax_7 + 1
            
            *(arg2 i+ 0xc) = eax_6
            int32_t eax_8 = sub_477030(&arg1[1], arg3)
            int32_t eax_9 = sub_476ff0(&arg1[1], arg3)
            
            if (eax_9 s>= 0 && eax_8 s>= 0)
                (*(**(arg2 i+ 4) + 0x30))(eax_9, eax_8)
            
            long double x87_r0
            int32_t xmm0 = sub_473f80(arg1[0x2e], x87_r0, arg2)
            int32_t* ecx_12 = *(arg2 i+ 4)
            int32_t* var_20 = ecx_12
            (*(*ecx_12 + 0x44))(0, xmm0, 0, 0xffffffff)
            int32_t eax_11
            eax_11.b = 1
            return eax_11
        
        (*(eax_5 + 4))()
    else
        int32_t* ecx_1 = arg1[3]
        
        if (ecx_1 != 0)
            int32_t* edx_1
            
            if (arg3[5] u< 0x10)
                edx_1 = arg3
            else
                edx_1 = *arg3
            
            esi_1 = (*(*ecx_1 + 8))(edx_1)
        
        if (ecx_1 != 0 && esi_1 != 0)
            goto label_4762f0
        
        esi_1 = sub_470650(&arg1[8], arg3)
        
        if (esi_1 != 0)
            goto label_4762f0

void** eax
eax.b = 0
return eax
