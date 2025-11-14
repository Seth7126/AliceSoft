// 函数: sub_455dc0
// 地址: 0x455dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4d8
void* var_8 = esi

if (*(esi + 0xc) == 0)
    int32_t* eax
    
    if (data_75d534 == 0)
        eax.b = 0
        return eax
    
    int32_t __saved_ebx_3
    int32_t __saved_ebx_1 = __saved_ebx_3
    eax = sub_6203f0()
    
    if (eax == 0)
        eax.b = 0
        return eax
    
    eax = (**eax)(0x6db8e4)
    
    if (eax == 0)
        eax.b = 0
        return eax
    
    (**eax)(esi + 4)
    *(esi + 0xc) = 1

int32_t var_c = 0
void* edi = esi + 0x10
HMODULE eax_5

if (((*(esi + 0x14) - *(esi + 0x10)) & 0xfffffffc) s> 0)
    char* edx_3 = arg1
    void** ebp_1 = *edi
    int32_t eax_3
    eax_3.b = *edx_3
    char var_11_1 = eax_3.b
    
    while (true)
        int32_t* ecx_3 = *ebp_1 + 8
        void* esi_1
        
        if (eax_3.b != 0)
            char* esi_2 = edx_3
            
            do
                eax_3.b = *esi_2
                esi_2 = &esi_2[1]
            while (eax_3.b != 0)
            
            esi_1 = esi_2 - &esi_2[1]
            edx_3 = arg1
        else
            esi_1 = nullptr
        
        void* ebx_1 = ecx_3[4]
        
        if (ecx_3[5] u>= 0x10)
            ecx_3 = *ecx_3
        
        void* eax_4 = esi_1
        
        if (ebx_1 u< esi_1)
            eax_4 = ebx_1
        
        if (sub_405190(eax_4, edx_3, ecx_3, eax_4) == 0 && ebx_1 u>= esi_1)
            eax_5.b = ebx_1 != esi_1
            
            if (eax_5 == 0)
                goto label_455f0f
        
        ebp_1 = &ebp_1[1]
        int32_t edx_6 = var_c + 1
        var_c = edx_6
        
        if (edx_6 s>= (*(edi + 4) - *edi) s>> 2)
            esi = var_8
            break
        
        edx_3 = arg1
        eax_3.b = var_11_1

struct drawpluginmanager::CPlugin::VTable** ebx_2 = sub_69adc6(0x24)

if (ebx_2 == 0)
    ebx_2 = nullptr
else
    *ebx_2 = &drawpluginmanager::CPlugin::`vftable'
    ebx_2[1] = 0
    ebx_2[7] = 0xf
    ebx_2[6] = 0
    ebx_2[2].b = 0
    ebx_2[8] = 0

struct drawpluginmanager::CPlugin::VTable** var_10 = ebx_2

if (sub_4568a0(ebx_2, arg1).b == 0)
    if (ebx_2 != 0)
        (*ebx_2)->vFunc_0(1)
    
label_455f0f:
    eax_5.b = 0
    return eax_5

int32_t* eax_10 = *(esi + 0x24)
int32_t* ebp_2 = ebx_2[8]
int32_t* i = *eax_10

if (i != eax_10)
    do
        (*(*ebp_2 + 8))(&i[4], i[8])
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(var_8 + 0x24))

struct drawpluginmanager::CPlugin::VTable*** eax_12 = *(edi + 4)
struct drawpluginmanager::CPlugin::VTable*** ecx_9 = &var_10

if (&var_10 u< eax_12)
    ecx_9 = *edi

if (&var_10 u>= eax_12 || ecx_9 u> &var_10)
    if (eax_12 == *(edi + 8))
        struct drawpluginmanager::CPlugin::VTable*** var_28_5 = ecx_9
        sub_412f20(edi)
    
    eax_12 = *(edi + 4)
    
    if (eax_12 != 0)
        *eax_12 = ebx_2
else
    if (eax_12 == *(edi + 8))
        struct drawpluginmanager::CPlugin::VTable*** var_28_4 = ecx_9
        sub_412f20(edi)
    
    int32_t* ecx_11 = *(edi + 4)
    
    if (ecx_11 != 0)
        *ecx_11 = *(*edi + ((&var_10 - ecx_9) s>> 2 << 2))
        int32_t eax_14
        eax_14.b = 1
        *(edi + 4) += 4
        return eax_14

*(edi + 4) += 4
eax_12.b = 1
return eax_12
