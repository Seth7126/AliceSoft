// 函数: sub_5a94f0
// 地址: 0x5a94f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f0c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm0 = arg2
float var_1c = xmm0
struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** arg_4
void* ebx = arg_4[0x88]

if (ebx == 0)
    int32_t* edx = *(arg1 + 0x74)
    *(arg1 + 0x74) = ebx
    
    if (edx != 0)
        (*(*edx + 0x1c))(1)
    
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int128_t* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t esi = 0
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x4da637d, *(ebx + 8) - *(ebx + 4))
int32_t edx_2 = edx_1 s>> 4
int32_t edi_2 = (edx_2 u>> 0x1f) + edx_2

if (edi_2 s<= 0)
label_5a95f1:
    void* ecx_8 = arg1
    int32_t* esi_1 = *(ecx_8 + 0x28)
    int32_t edi_4 = *(ecx_8 + 0x2c)
    
    if (esi_1 != edi_4)
        do
            if (sub_57c160(*esi_1, ebx, &var_28, arg4).b == 0)
                goto label_5a9640
            
            esi_1 = &esi_1[1]
        while (esi_1 != edi_4)
        
        ecx_8 = arg1
    
    if (var_28 != var_24)
        if (*(ecx_8 + 0x74) == 0)
            struct sealengine::CDrawInstance::sealengine::CLineListView::VTable*** eax_15 =
                sub_589ad0(&arg_4)
            
            if (ecx_8 + 0x74 != eax_15)
                struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** eax_16 =
                    *eax_15
                *eax_15 = nullptr
                int32_t* ecx_12 = *(ecx_8 + 0x74)
                *(ecx_8 + 0x74) = eax_16
                
                if (ecx_12 != 0)
                    (*(*ecx_12 + 0x1c))(1)
            
            struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** ecx_13 = arg_4
            
            if (ecx_13 != 0)
                (*ecx_13)->vFunc_7(1)
        
        ebx.b = sub_58b7f0(*(ecx_8 + 0x74), &var_28, &data_7e7128, 0, 0, arg3).b
    else
        int32_t* edx_5 = *(ecx_8 + 0x74)
        *(ecx_8 + 0x74) = 0
        
        if (edx_5 != 0)
            (*(*edx_5 + 0x1c))(1)
        
        ebx.b = 1
else
    int32_t eax_6 = edi_2
    int32_t edi_3 = 0
    
    while (true)
        if (esi s>= 0)
            int32_t ecx_6 = *(ebx + 8) - *(ebx + 4)
            
            if (esi s< ecx_6 s/ 0x34c)
                void* eax_11 = *(ebx + 4)
                
                if (eax_11 != neg.d(edi_3))
                    int32_t var_3c_1 = ecx_6
                    
                    if (sub_5a96d0(eax_11 + edi_3, arg_4, ebx, &var_28, xmm0).b == 0)
                    label_5a9640:
                        ebx.b = 0
                        break
                    
                    xmm0 = var_1c
            
            eax_6 = edi_2
        
        esi += 1
        edi_3 += 0x34c
        
        if (esi s>= eax_6)
            goto label_5a95f1

int128_t* edx_6 = var_28

if (edx_6 != 0)
    sub_403160(edx_6, (var_20 - edx_6) s>> 5, 0x20)

int128_t* eax_13
eax_13.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
