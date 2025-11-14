// 函数: sub_630d90
// 地址: 0x630d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_508
int32_t eax_1 = __security_cookie ^ &var_508
char* result_1 = nullptr
void* edi = arg2
int32_t var_4f8 = 0
char eax_2 = (*(arg1 + 0x74)).b
var_508 = edi

if ((eax_2 & 1) == 0)
    sub_62a740(arg1, "missing IHDR")
    noreturn

int32_t* result
void* arg_4

if ((eax_2 & 6) == 0)
    void* ebp_1 = arg_4
    
    if (ebp_1 u>= 9)
        uint32_t eax_3 = zx.d(*(arg1 + 0x326))
        
        if ((eax_3 & 0x8000) != 0)
            result = sub_62fcc0(arg1, ebp_1)
        else if ((eax_3.b & 4) != 0)
            result_1 = "too many profiles"
        label_63123c:
            sub_62fcc0(arg1, ebp_1)
        label_631248:
            *(arg1 + 0x326) |= 0x8000
            sub_627f60(arg1, edi)
            result = result_1
            
            if (result != 0)
                result = sub_62a7c0(arg1, result)
        else
            void* edi_1 = 0x51
            
            if (ebp_1 u< 0x51)
                edi_1 = ebp_1
            
            void var_4e8
            sub_62fc80(eax_3, &var_4e8, arg1, edi_1)
            ebp_1 -= edi_1
            arg_4 = ebp_1
            int32_t esi_1 = 0
            void var_4e7
            void var_4e6
            
            while (esi_1 u< edi_1)
                if (*(&var_4e8 + esi_1) == 0)
                    break
                
                if (esi_1 + 1 u>= edi_1 || *(&var_4e7 + esi_1) == 0)
                    esi_1 += 1
                    break
                
                if (esi_1 + 2 u>= edi_1 || *(&var_4e6 + esi_1) == 0)
                    esi_1 += 2
                    break
                
                void var_4e5
                
                if (esi_1 + 3 u>= edi_1 || *(&var_4e5 + esi_1) == 0)
                    esi_1 += 3
                    break
                
                char var_4e4[0x54]
                
                if (esi_1 + 4 u>= edi_1 || var_4e4[esi_1] == 0)
                    esi_1 += 4
                    break
                
                esi_1 += 5
                
                if (esi_1 u>= 0x50)
                    break
                
                continue
            
            if (esi_1 - 1 u> 0x4e)
                edi = var_508
                result_1 = "bad keyword"
                goto label_63123c
            
            if (esi_1 + 1 u>= edi_1 || *(&var_4e7 + esi_1) != 0)
                edi = var_508
                result_1 = "bad compression method"
                goto label_63123c
            
            void* eax_9
            void** ecx_2
            eax_9, ecx_2 = sub_62ff50(arg1, 0x69434350)
            
            if (eax_9 != 0)
                edi = var_508
                result_1 = *(arg1 + 0x9c)
                goto label_63123c
            
            uint32_t var_500 = 0x84
            *(arg1 + 0x84) = &var_4e6 + esi_1
            int32_t var_51c_2 = 0
            *(arg1 + 0x88) = edi_1 - esi_1 - 2
            char var_490
            void var_408
            sub_630430(&arg_4, &var_408, arg1, ecx_2, &arg_4, &var_490, &var_500)
            
            if (var_500 != 0)
            label_6311e1:
                result_1 = *(arg1 + 0x9c)
            label_6311e5:
                ebp_1 = arg_4
            label_6311ec:
                edi = var_508
            label_6311f5:
                *(arg1 + 0x80) = 0
                
                if (var_4f8 != 0)
                    goto label_631248
                
                goto label_63123c
            
            char var_48f
            char var_48e
            char var_48d
            uint32_t ebp_8 = (((((zx.d(var_490) << 8) + zx.d(var_48f)) << 8) + zx.d(var_48e)) << 8)
                + zx.d(var_48d)
            
            if (sub_628b00(&var_4e8, ebp_8) == 0)
                goto label_6311e5
            
            if (sub_628b40(&var_4e8, arg1 + 0x2dc, arg1, &var_4e8, ebp_8, &var_490, *(arg1 + 0x157))
                    == 0)
                goto label_6311e5
            
            char var_40d
            uint32_t eax_21 = zx.d(var_40d)
            char var_410
            char var_40f
            char var_40e
            var_500 =
                (((((zx.d(var_410) << 8) + zx.d(var_40f)) << 8) + zx.d(var_40e)) << 8) + eax_21
            char* eax_22 = sub_62fe60(eax_21, ebp_8, arg1, 2)
            
            if (eax_22 == 0)
                result_1 = "out of memory"
                goto label_6311e5
            
            void** ecx_14 = __builtin_memcpy(eax_22, &var_490, 0x84)
            uint32_t esi_2 = var_500
            int32_t var_51c_5 = 0
            uint32_t eax_24 = esi_2 * 0xc
            var_500 = eax_24
            sub_630430(&arg_4, &var_408, arg1, ecx_14, &arg_4, &eax_22[0x84], &var_500)
            
            if (var_500 != 0)
                goto label_6311e1
            
            int32_t eax_28
            void** ecx_17
            eax_28, ecx_17 = sub_628e50(&var_4e8, arg1 + 0x2dc, arg1, &var_4e8, ebp_8, eax_22)
            
            if (eax_28 == 0)
                goto label_6311e5
            
            var_500 = ebp_8 - eax_24 - 0x84
            int32_t var_51c_7 = 1
            sub_630430(&arg_4, &var_408, arg1, ecx_17, &arg_4, &eax_22[(esi_2 + 0xb) * 0xc], 
                &var_500)
            ebp_1 = arg_4
            
            if (ebp_1 != 0 && (*(arg1 + 0x78) & 0x100000) == 0)
                result_1 = "extra compressed data"
                goto label_6311ec
            
            if (var_500 != 0)
                result_1 = "truncated"
                goto label_6311ec
            
            if (ebp_1 != 0)
                sub_62a770(arg1, "extra compressed data")
            
            var_4f8 = 1
            result = sub_628f70(sub_62fcc0(arg1, ebp_1), eax_22, arg1, *(arg1 + 0xb4))
            
            if (result != 0)
                result = sub_6291e0(eax_22)
            
            void* esi_3 = var_508
            char* esi_4
            
            if (esi_3 != 0)
                sub_6275c0(result, esi_3, arg1, 0x10, 0)
                uint32_t ecx_24 = esi_1 + 1
                int32_t* eax_38
                
                if (ecx_24 == 0)
                    eax_38 = nullptr
                else
                    eax_38 = sub_62ab50(arg1, ecx_24)
                    ecx_24 = esi_1 + 1
                
                *(esi_3 + 0x74) = eax_38
                
                if (eax_38 == 0)
                    esi_4 = "out of memory"
                    *(arg1 + 0x326) |= 0x8000
                    result_1 = "out of memory"
                else
                    sub_69d850(eax_38, &var_4e8, ecx_24)
                    *(esi_3 + 0xe8) |= 0x10
                    *(esi_3 + 8) |= 0x1000
                    *(esi_3 + 0x7c) = ebp_8
                    *(esi_3 + 0x78) = eax_22
                    esi_4 = nullptr
                    *(arg1 + 0x2b8) = 0
                
                edi = var_508
                result = sub_627f60(arg1, edi)
            
            if (esi_3 != 0 && esi_4 != 0)
                goto label_6311f5
            
            *(arg1 + 0x80) = 0
    else
        sub_62fcc0(arg1, ebp_1)
        result = sub_62a7c0(arg1, "too short")
else
    sub_62fcc0(arg1, arg_4)
    result = sub_62a7c0(arg1, "out of place")
sub_69a5bc(eax_1 ^ &var_508)
return result
