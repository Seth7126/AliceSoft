// 函数: sub_418200
// 地址: 0x418200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72842f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_7fcb88
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (edi != 0)
    eax_3 = (**edi)(0x75cee0)
    *(arg1 + 0x1c) = eax_3
    
    if (eax_3 != 0)
        int32_t eax_6 = (**edi)("|.Pd")
        int32_t* ecx_4 = *(arg1 + 0x18)
        *(arg1 + 0x14) = eax_6
        
        if (ecx_4 != 0)
            (**ecx_4)(1)
        
        struct dpanalysis::CModel::VTable** eax_8 = sub_6e810c(0x60)
        struct dpanalysis::CModel::VTable** var_14_1 = eax_8
        int32_t var_8_1 = 0
        struct dpanalysis::CModel::VTable** eax_9 = sub_40cdc0(eax_8, *(arg1 + 0x1c))
        int32_t var_8_2 = 0xffffffff
        *(arg1 + 0x18) = eax_9
        
        if (sub_40cf10(eax_9).b != 0)
            struct dpanalysis::CDotNetView::VTable** eax_10 = sub_6e810c(0x24)
            struct dpanalysis::CDotNetView::VTable** var_14_2 = eax_10
            *(arg1 + 0x50) = sub_40a410(eax_10, *(arg1 + 0xc), arg1, *(arg1 + 0x18))
            struct dpanalysis::CDotNetView::VTable** eax_11
            eax_11.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
