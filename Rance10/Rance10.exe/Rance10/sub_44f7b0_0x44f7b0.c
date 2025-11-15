// 函数: sub_44f7b0
// 地址: 0x44f7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
int32_t esi
int32_t var_8 = esi
int32_t* esi_1 = data_7fcb88
int32_t edi
int32_t var_c = edi
void* edi_1 = data_7fcb4c
int32_t eax

if (esi_1 != 0)
    eax = (**esi_1)(0x75dd58)
    *(edi_1 + 4) = eax
    
    if (eax != 0)
        int32_t ebx
        int32_t var_10 = ebx
        int32_t* eax_3 = (**esi_1)(0x75dd48)
        
        if (eax_3 == 0)
            eax_3.b = 0
            return eax_3
        
        *(edi_1 + 0x30) = eax_3
        *(edi_1 + 0x24) = 0
        *(edi_1 + 0x2c) = 0
        *(edi_1 + 0x28) = sub_44f250(edi_1 + 0x20)
        *(edi_1 + 0x38) = *(edi_1 + 4)
        *(edi_1 + 0x3c) = eax_3
        *(edi_1 + 0x40) = 0
        *(edi_1 + 0x44) = (**eax_3)()
        sub_44f840(edi_1)
        struct common::SuicideRefCounter<class IGraphPlugin>::chipmunk::CGraphPlugin::VTable** eax_8
        eax_8.b = 1
        return eax_8

eax.b = 0
return eax
