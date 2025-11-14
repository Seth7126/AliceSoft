// 函数: sub_541a60
// 地址: 0x541a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x200)

if (ecx != 0)
    int32_t eax_1 = *(arg1 + 0x10)
    char var_c_1
    
    if (eax_1 != 0xa)
        var_c_1 = 1
    
    if (eax_1 == 0xa || eax_1 == 0xb)
        var_c_1 = 0
    
    void* esi_1 = arg1 + 0x14
    struct sealengine::CPolyData::VTable** eax_2
    int32_t ecx_1
    int32_t edx_1
    eax_2, ecx_1, edx_1 = sub_58db80(ecx, esi_1, var_c_1)
    *(arg1 + 0x1c0) = eax_2
    
    if (eax_2 != 0)
        int32_t* eax_3
        int32_t ecx_3
        int32_t edx_2
        eax_3, ecx_3, edx_2 = sub_596da0(arg1 + 0xd0, eax_2, *(arg1 + 0x200))
        
        if (eax_3.b == 0)
            if (*(esi_1 + 0x14) u>= 0x10)
                esi_1 = *esi_1
            
            sub_59f4e0(eax_3, edx_2, ecx_3, 0x6e3910, esi_1)
            enum MESSAGEBOX_RESULT eax_4
            eax_4.b = 0
            return eax_4
        
        sub_53e450(arg1)
        int32_t* eax_5
        
        if (sub_57eab0(*(arg1 + 0x1c0)).b != 0)
            void* var_1c_5 = arg1
            int32_t ecx_7
            int32_t edx_3
            eax_5, ecx_7, edx_3 = sub_5246c0(*(arg1 + 0x1c8))
            
            if (eax_5.b == 0)
                if (*(esi_1 + 0x14) u>= 0x10)
                    esi_1 = *esi_1
                
                sub_59f4e0(eax_5, edx_3, ecx_7, 0x6e38a0, esi_1)
                enum MESSAGEBOX_RESULT eax_6
                eax_6.b = 0
                return eax_6
        
        *(arg1 + 0x1c4) = 0
        eax_5.b = 1
        return eax_5
    
    if (*(esi_1 + 0x14) u>= 0x10)
        esi_1 = *esi_1
    
    sub_59f4e0(eax_2, edx_1, ecx_1, 0x6e38e0, esi_1)

enum MESSAGEBOX_RESULT eax
eax.b = 0
return eax
