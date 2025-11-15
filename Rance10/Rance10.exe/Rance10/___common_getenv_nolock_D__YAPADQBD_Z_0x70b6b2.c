// 函数: ??$common_getenv_nolock@D@@YAPADQBD@Z
// 地址: 0x70b6b2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
void** edi_1 = j_sub_710b41()

if (edi_1 != 0 && arg1 != 0)
    char* esi_1 = arg1
    void** eax
    
    do
        eax.b = *esi_1
        esi_1 = &esi_1[1]
    while (eax.b != 0)
    void* esi_2 = esi_1 - &esi_1[1]
    
    while (*edi_1 != 0)
        char* edx_1 = *edi_1
        char* ecx_2 = edx_1
        void* eax_1
        
        do
            eax_1.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (eax_1.b != 0)
        
        if (ecx_2 - &ecx_2[1] u> esi_2 && *(edx_1 + esi_2) == 0x3d
                && sub_71792c(edx_1, arg1, esi_2) == 0)
            return *edi_1 + 1 + esi_2
        
        edi_1 = &edi_1[1]

return nullptr
