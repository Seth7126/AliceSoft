// 函数: sub_415180
// 地址: 0x415180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x78) = 0
int32_t* ebx_1 = *(arg2 + 0x10)

if (ebx_1 == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t esi = *ebx_1
int32_t* ebp = (*(esi + 4))((*(esi + 0x1c))())
int32_t* eax_2

if (ebp != 0)
    eax_2 = (*(*ebp + 0x14))()
    void* arg_4
    void* esi_1 = arg_4
    
    if (eax_2 s>= esi_1)
        int32_t eax_5 = (*(*ebp + 0x18))()
        int32_t edx_1 = *(arg1 + 4)
        void* esi_2 = *(eax_5 + (esi_1 << 2))
        void* eax_14
        
        if (edx_1 == 0xa || edx_1 == 0x2f || edx_1 == 0xb || edx_1 == 0x5c)
            int32_t eax_26 = (*(*ebx_1 + 0x1c))()
            bool cond:0_1 = *(arg1 + 4) != 0xb
            *(arg1 + 0x44) = eax_26
            *(arg1 + 0x48) = arg_4
            
            if (cond:0_1)
                *(arg1 + 0x4c) = esi_2
                *(arg1 + 0x78) = 1
                eax_14.b = *(arg1 + 0x78)
                return eax_14
            
            arg_4 = esi_2
            void* xmm0_1 = arg_4
            *(arg1 + 0x78) = 1
            eax_14.b = *(arg1 + 0x78)
            *(arg1 + 0x50) = xmm0_1
            return eax_14
        
        if (sub_416930(arg1) == 0)
            if (edx_1 == 0xc || edx_1 == 0x14)
                *(arg1 + 0x44) = esi_2
                char eax_24 = sub_415810(arg1 + 0x54, (*(*ebx_1 + 4))(esi_2))
                *(arg1 + 0x78) = eax_24
                return eax_24
            
            if (edx_1 == 0xd || edx_1 == 0x15 || edx_1 == 0x59)
                int32_t var_14_3 = 0
                *(arg1 + 0x44) = esi_2
                char eax_21 = sub_415890(arg2, arg1 + 0x6c, arg1 + 8, *(arg2 + 0x14), ebx_1, esi_2)
                *(arg1 + 0x78) = eax_21
                return eax_21
            
            if (edx_1 == 0x3f || edx_1 == 0x43)
                *(arg1 + 0x44) = esi_2
                char eax_19 = sub_415860(arg1 + 0x4c, (*(*ebx_1 + 4))(esi_2))
                *(arg1 + 0x78) = eax_19
                return eax_19
            
            int32_t ecx_12 = *(arg1 + 4)
            
            if (ecx_12 != 0x4f && ecx_12 != 0x50)
                eax_14.b = *(arg1 + 0x78)
                return eax_14
            
            *(arg1 + 0x44) = esi_2
            char eax_16 = sub_415a60(arg2, *(arg2 + 0x14), arg1 + 0x6c, ebx_1, esi_2, arg1 + 4, 0)
            *(arg1 + 0x78) = eax_16
            return eax_16
        
        if ((*(*ebp + 0x14))() s>= arg_4 + 1)
            *(arg1 + 0x44) = esi_2
            int32_t eax_10 = *((*(*ebp + 0x18))() + (arg_4 << 2) + 4)
            int32_t var_18_1 = *(arg1 + 0x44)
            *(arg1 + 0x48) = eax_10
            int32_t* eax_12 = (*(*ebx_1 + 4))(var_18_1)
            
            if (sub_4157c0(eax_12, eax_12, &arg_4, eax_10).b != 0)
                void* eax_13 = arg_4
                
                if (*(arg1 + 4) != 0x13)
                    *(arg1 + 0x4c) = eax_13
                    *(arg1 + 0x78) = 1
                    eax_13.b = *(arg1 + 0x78)
                    return eax_13
                
                arg_4 = eax_13
                void* xmm0 = arg_4
                *(arg1 + 0x78) = 1
                eax_13.b = *(arg1 + 0x78)
                *(arg1 + 0x50) = xmm0
                return eax_13

eax_2.b = 0
return eax_2
