// 函数: sub_56c900
// 地址: 0x56c900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_70 = 0xffffffff
int32_t (* var_74)(void* arg1) = __ehhandler$?_RunAndWait@_StructuredTaskCollection@details@Concurrency@@QAG?AW4_TaskCollectionStatus@23@PAV_UnrealizedChore@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::CPoint::VTable* const var_6c
int32_t var_e8 = __security_cookie ^ &var_6c
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(*(arg1 + 4))
int32_t edi = *(ebx + 4)
int32_t result

if (edi s> (eax_4 - edx) s>> 1)
    result.b = 0
else
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(*(arg1 + 8))
    
    if (*(ebx + 8) s> (eax_7 - edx_1) s>> 1)
        result.b = 0
    else
        int32_t result_2 = *(arg1 + 0x14)
        int32_t result_1 = result_2
        result = *(arg1 + 0x10)
        void* esi_1 = arg1 + 0x10
        void* var_8_1 = esi_1
        
        if (result != result_2)
            do
                int32_t esi_2 = *(result + 0x14)
                
                if (esi_2 s>= edi)
                    int32_t edi_1 = *(result + 0x18)
                    
                    if (edi_1 s>= *(ebx + 8) && (result_1 == result_2 || *(result_1 + 0x14) s> esi_2
                            || *(result_1 + 0x18) s> edi_1))
                        result_1 = result
                    
                    edi = *(ebx + 4)
                
                result += 0x1c
            while (result != result_2)
            
            esi_1 = var_8_1
        
        if (result_1 == result_2)
            result.b = 0
        else
            int32_t eax_9 = *(result_1 + 8)
            int32_t edi_2 = *(result_1 + 0x18)
            int32_t var_44_1 = eax_9
            int32_t eax_10 = *(result_1 + 0xc)
            int32_t var_40_1 = eax_10
            int32_t eax_11 = *(result_1 + 0x14)
            struct common::CRect::VTable* const var_4c_1 = &common::CRect::`vftable'
            struct common::CPoint::VTable* const var_48 = &common::CPoint::`vftable'
            struct common::CSize::VTable* const var_3c = &common::CSize::`vftable'
            int32_t var_c_1 = eax_11
            int32_t var_38_1 = eax_11
            int32_t var_30_1 = edi_2
            int32_t var_34_1 = edi_2
            int32_t var_70_1 = 0
            int32_t var_ec_1 = 0.d
            sub_56d3d0(eax_11, *(esi_1 + 4), result_1 + 0x1c, result_1)
            void* eax_12 = *(esi_1 + 4)
            char var_10_1
            var_10_1.d = eax_12
            int32_t* esi_3 = eax_12 - 0x1c
            
            if (esi_3 != eax_12)
                do
                    (**esi_3)(0)
                    esi_3 = &esi_3[7]
                while (esi_3 != eax_12)
                
                ebx = arg2
            
            int32_t ecx_2 = var_c_1
            *(var_8_1 + 4) -= 0x1c
            int32_t eax_16
            int32_t edx_3
            edx_3:eax_16 = sx.q(ecx_2)
            
            if (*(ebx + 4) s<= (eax_16 - edx_3) s>> 1)
                int32_t eax_44
                int32_t edx_6
                
                do
                    int32_t eax_20
                    int32_t edx_4
                    edx_4:eax_20 = sx.q(edi_2)
                    int32_t edi_4 = (eax_20 - edx_4) s>> 1
                    
                    if (*(ebx + 8) s> edi_4)
                        edi_2 = var_30_1
                        break
                    
                    int32_t var_ec_2 = ecx_2
                    struct common::CSize::VTable* var_90
                    struct common::CSize::VTable** eax_22 = sub_404b80(&var_3c, &var_90)
                    int32_t eax_24
                    int32_t edx_5
                    edx_5:eax_24 = sx.q(var_c_1)
                    struct common::CPoint::VTable* const var_60 = &common::CPoint::`vftable'
                    int32_t var_5c_1 = (eax_24 - edx_5) s>> 1
                    int32_t var_58_1 = 0
                    struct common::CPoint::VTable* var_84
                    struct common::CPoint::VTable** eax_27 = sub_404810(&var_48, &var_84, &var_60)
                    int32_t ecx_5 = eax_27[1]
                    int32_t var_20_1 = eax_27[2]
                    int32_t var_18_1 = eax_22[1]
                    int32_t eax_30 = eax_22[2]
                    struct common::CRect::VTable* const var_2c = &common::CRect::`vftable'
                    struct common::CPoint::VTable* const var_28_1 = &common::CPoint::`vftable'
                    int32_t var_24_1 = ecx_5
                    struct common::CSize::VTable* const var_1c_1 = &common::CSize::`vftable'
                    int32_t var_14_1 = eax_30
                    var_70_1.b = 4
                    int32_t var_ec_5 = sub_56cf50(var_8_1, &var_2c)
                    var_84 = &common::CPoint::`vftable'
                    var_60 = &common::CPoint::`vftable'
                    var_90 = &common::CSize::`vftable'
                    struct common::CSize::VTable* var_a8
                    struct common::CSize::VTable** eax_31 = sub_404b80(&var_3c, &var_a8)
                    var_6c = &common::CPoint::`vftable'
                    int32_t var_68_1 = 0
                    int32_t var_64_1 = edi_4
                    struct common::CPoint::VTable* var_9c
                    struct common::CPoint::VTable** eax_32 = sub_404810(&var_48, &var_9c, &var_6c)
                    int32_t ecx_10 = eax_32[1]
                    int32_t var_20_2 = eax_32[2]
                    int32_t var_18_2 = eax_31[1]
                    int32_t eax_35 = eax_31[2]
                    var_2c = &common::CRect::`vftable'
                    struct common::CPoint::VTable* const var_28_2 = &common::CPoint::`vftable'
                    int32_t var_24_2 = ecx_10
                    struct common::CSize::VTable* const var_1c_2 = &common::CSize::`vftable'
                    int32_t var_14_2 = eax_35
                    var_70_1.b = 8
                    int32_t ecx_12 = sub_56cf50(var_8_1, &var_2c)
                    var_9c = &common::CPoint::`vftable'
                    var_6c = &common::CPoint::`vftable'
                    var_a8 = &common::CSize::`vftable'
                    int32_t var_ec_8 = ecx_12
                    struct common::CSize::VTable* const* ecx_13 = &var_3c
                    struct common::CSize::VTable* var_cc
                    struct common::CSize::VTable** eax_36 = sub_404b80(ecx_13, &var_cc)
                    struct common::CSize::VTable* const* var_ec_9 = &var_3c
                    struct common::CSize::VTable* var_c0
                    struct common::CPoint::VTable* var_b4
                    struct common::CPoint::VTable** eax_38 =
                        sub_404810(&var_48, &var_b4, sub_404b80(ecx_13, &var_c0))
                    int32_t ecx_15 = eax_38[1]
                    int32_t var_20_3 = eax_38[2]
                    int32_t var_18_3 = eax_36[1]
                    int32_t eax_41 = eax_36[2]
                    var_2c = &common::CRect::`vftable'
                    struct common::CPoint::VTable* const var_28_3 = &common::CPoint::`vftable'
                    int32_t var_24_3 = ecx_15
                    struct common::CSize::VTable* const var_1c_3 = &common::CSize::`vftable'
                    int32_t var_14_3 = eax_41
                    var_70_1.b = 0xc
                    int32_t var_ec_12 = sub_56cf50(var_8_1, &var_2c)
                    var_70_1.b = 0
                    var_b4 = &common::CPoint::`vftable'
                    var_c0 = &common::CSize::`vftable'
                    var_cc = &common::CSize::`vftable'
                    struct common::CSize::VTable* var_d8
                    struct common::CSize::VTable** eax_42 = sub_404b80(&var_3c, &var_d8)
                    ecx_2 = eax_42[1]
                    edi_2 = eax_42[2]
                    edx_6:eax_44 = sx.q(ecx_2)
                    var_c_1 = ecx_2
                    var_30_1 = edi_2
                    int32_t var_38_2 = ecx_2
                    int32_t var_34_2 = edi_2
                    var_d8 = &common::CSize::`vftable'
                while (*(ebx + 4) s<= (eax_44 - edx_6) s>> 1)
            
            *(arg3 + 8) = eax_9
            *(arg3 + 0xc) = eax_10
            *(arg3 + 0x14) = ecx_2
            *(arg3 + 0x18) = edi_2
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
