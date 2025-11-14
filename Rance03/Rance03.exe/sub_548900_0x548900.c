// 函数: sub_548900
// 地址: 0x548900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_51faa0(arg1)
int32_t* result = arg2[0xd]
void* i = *result
void* i_1 = i

if (i != result)
    do
        void* ebx_1 = *(i + 0x14)
        
        if (ebx_1 == 0)
            result.b = 0
            return result
        
        struct sealengine::CMaterial::VTable** eax_2 = sub_69adc6(0x58)
        struct sealengine::CMaterial::VTable** edi_1
        
        if (eax_2 == 0)
            edi_1 = nullptr
        else
            edi_1 = sub_548240(eax_2)
        
        if (sub_5483c0(edi_1, ebx_1, arg3).b == 0)
            if (edi_1 != 0)
                (*edi_1)->vFunc_0(1)
            
            result.b = 0
            return result
        
        *sub_42f350(arg1 + 4, i + 0x10) = edi_1
        sub_418380(&i_1)
        i = i_1
    while (i != arg2[0xd])

result.b = 1
return result
