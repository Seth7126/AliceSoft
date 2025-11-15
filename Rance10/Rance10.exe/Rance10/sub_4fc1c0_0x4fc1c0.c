// 函数: sub_4fc1c0
// 地址: 0x4fc1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg4 == 0 && arg5 == 0)
    return 

void* esi_1 = arg1[1]
void* ecx_5

if (esi_1 == *arg1)
label_4fc238:
    
    if (arg4 != 0 || arg5 != 0)
        ecx_5 = arg6 + 0x1e4
    label_4fc250:
        struct partsengine::IEventArgs::partsengine::SMouseWheelEventArgs::VTable* const var_c =
            &partsengine::SMouseWheelEventArgs::`vftable'{for `partsengine::IEventArgs'}
        int32_t var_8_1 = arg4
        int32_t var_4_1 = arg5
        sub_4cbd50(ecx_5, &var_c, 0)
    
    return 

int32_t* edi_1

while (true)
    edi_1 = *(esi_1 - 4)
    esi_1 -= 4
    
    if (sub_4ee170(*(*edi_1 + 0x50)) != 0)
        int32_t* ecx_3 = *edi_1
        void* eax_2 = ecx_3[0x14]
        
        if (*(eax_2 + 0x308) != 0 && not(_mm_cvtepi32_ps(zx.o(*(eax_2 + 0x304))) f<= 0)
                && (*(*ecx_3 + 0x44))(arg2, arg3, 1).b != 0)
            break
    
    if (esi_1 == *arg1)
        goto label_4fc238

if (arg4 != 0 || arg5 != 0)
    ecx_5 = &edi_1[0x79]
    goto label_4fc250
