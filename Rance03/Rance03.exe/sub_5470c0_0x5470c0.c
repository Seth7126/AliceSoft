// 函数: sub_5470c0
// 地址: 0x5470c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void* edi = arg1
int32_t ebx_2 = (*(arg2 + 8) - *(arg2 + 4)) s>> 2
void* var_4 = edi
sub_547460(arg1, ebx_2)
int32_t esi = 0
int32_t result

if (ebx_2 s> 0)
    while (true)
        void* const ebx_3
        
        if (esi s< 0 || esi s>= (*(arg2 + 8) - *(arg2 + 4)) s>> 2)
            ebx_3 = nullptr
        else
            ebx_3 = *(*(arg2 + 4) + (esi << 2))
        
        int32_t edi_1 = *(edi + 4) + (esi << 2)
        
        if (ebx_3 != 0)
            if (*edi_1 == 0)
                struct sealengine::CInstanceView::VTable** eax_5 = sub_69adc6(0x70)
                struct sealengine::CInstanceView::VTable** eax_6
                
                if (eax_5 == 0)
                    eax_6 = nullptr
                else
                    eax_6 = sub_544c70(eax_5, *(var_4 + 0x18), *(var_4 + 0x1c), arg4, 
                        *(var_4 + 0x10), *(var_4 + 0x14))
                
                *edi_1 = eax_6
            
            if (sub_544f00(*edi_1, ebx_3, arg3, arg5).b == 0)
                result.b = 0
                return result
        else
            int32_t* ecx = *edi_1
            
            if (ecx != 0)
                (**ecx)(1)
                *edi_1 = ebx_3
        
        esi += 1
        
        if (esi s>= ebx_2)
            break
        
        edi = var_4

result.b = 1
return result
