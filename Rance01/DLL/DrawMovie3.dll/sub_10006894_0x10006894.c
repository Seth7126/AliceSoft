// 函数: sub_10006894
// 地址: 0x10006894
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* ebx = arg5
void* eax = *(ebx + 4)
int32_t edi
int32_t var_3c = edi
char var_5 = 0
int32_t ecx_1

if (eax s> 0x80)
    ecx_1 = arg2[2]
else
    ecx_1 = sx.d(arg2[2].b)

int32_t var_c = ecx_1

if (ecx_1 s< 0xffffffff || ecx_1 s>= eax)
    sub_10006d2a()
    noreturn

int32_t* esi = arg1

if (*esi != 0xe06d7363)
    goto label_10006b97

if (esi[4] != 3)
    goto label_10006a10

eax = esi[5]

if (eax == 0x19930520 || eax == 0x19930521)
    if (esi[7] != 0)
        goto label_10006a10
else if (eax != 0x19930522 || esi[7] != 0)
    goto label_10006a10

void* result = __getptd()

if (*(result + 0x88) == 0)
    return result

esi = *(__getptd() + 0x88)
arg1 = esi
arg3 = *(__getptd() + 0x8c)

if (sub_1000a4fa(esi) == 0)
    sub_10006d2a()
    noreturn

if (*esi == 0xe06d7363 && esi[4] == 3)
    int32_t eax_5 = esi[5]
    
    if ((eax_5 == 0x19930520 || eax_5 == 0x19930521 || eax_5 == 0x19930522) && esi[7] == 0)
        sub_10006d2a()
        noreturn

int32_t edx
eax, ecx_1, edx = __getptd()

if (*(eax + 0x94) == 0)
    goto label_10006a10

int32_t* edi_1 = *(__getptd() + 0x94)
int32_t i_1 = 0
*(__getptd() + 0x94) = 0
eax, edx = sub_100062c1(edi_1, arg1)
ecx_1 = arg1

if (eax.b != 0)
    esi = arg1
label_10006a10:
    
    if (*esi == 0xe06d7363 && esi[4] == 3)
        eax = esi[5]
    
    if (*esi == 0xe06d7363 && esi[4] == 3
            && (eax == 0x19930520 || eax == 0x19930521 || eax == 0x19930522))
        void* edi_2 = arg5
        
        if (*(edi_2 + 0xc) u> 0)
            int32_t var_20
            int32_t var_14
            int32_t* edi_3 = sub_100029e3(edi_2, arg7, var_c, &var_14, &var_20)
            
            while (var_14 u< var_20)
                if (*edi_3 s<= var_c && var_c s<= edi_3[1])
                    char* var_10_1 = edi_3[4]
                    int32_t i_2 = edi_3[3]
                    int32_t i = i_2
                    
                    if (i_2 s> 0)
                        do
                            int32_t* eax_15 = *(esi[7] + 0xc)
                            void* ebx_2 = &eax_15[1]
                            int32_t eax_16 = *eax_15
                            int32_t var_18_1 = eax_16
                            
                            if (eax_16 s> 0)
                                while (true)
                                    char* eax_17 = *ebx_2
                                    int32_t eax_18 = sub_10006075(var_10_1, eax_17, esi[7])
                                    
                                    if (eax_18 != 0)
                                        var_5 = 1
                                        sub_10006732(arg2, edi_3, esi, arg3, arg4, arg5, eax_17, 
                                            arg7, arg8)
                                        esi = arg1
                                        break
                                    
                                    var_18_1 -= 1
                                    ebx_2 += 4
                                    
                                    if (var_18_1 s<= eax_18)
                                        goto label_10006ab6
                                
                                break
                            
                        label_10006ab6:
                            i -= 1
                            var_10_1 = &var_10_1[0x10]
                        while (i s> 0)
                
                var_14 += 1
                edi_3 = &edi_3[5]
            
            edi_2 = arg5
        
        if (arg6 != 0)
            sub_10006243(esi)
        
        if (var_5 == 0 && (*edi_2 & 0x1fffffff) u>= 0x19930521)
            int32_t* edi_4 = *(edi_2 + 0x1c)
            
            if (edi_4 != 0 && sub_100062c1(edi_4, esi) == 0)
                __getptd()
                __getptd()
                *(__getptd() + 0x88) = esi
                *(__getptd() + 0x8c) = arg3
                int32_t* var_44_8
                
                var_44_8 = arg8 != 0 ? arg8 : arg2
                
                sub_100027b0(var_44_8, esi)
                int32_t var_40_9 = 0xffffffff
                sub_1000611d(arg2, arg4, arg5)
                int32_t var_40_10 = *(arg5 + 0x1c)
                CallUnexpected()
                noreturn
        
        goto label_10006bc3
    
    ebx = arg5
label_10006b97:
    
    if (*(ebx + 0xc) u<= 0)
        goto label_10006bc3
    
    if (arg6 == 0)
        sub_100067a0(eax, edx, ecx_1, esi, arg2, arg3, arg4, ebx, var_c, arg7, arg8)
    label_10006bc3:
        result = __getptd()
        
        if (*(result + 0x94) == 0)
            return result
        
        sub_10006d2a()
        noreturn
else
    int32_t ebx_1 = 0
    
    if (*edi_1 s> 0)
        do
            if (sub_10001d8e(*(ebx_1 + edi_1[1] + 4), 
                    &class std::bad_exception `RTTI Type Descriptor') != 0)
                int32_t var_40_2 = 1
                sub_10006243(arg1)
                char const* const var_40_3 = "bad exception"
                struct std::exception::VTable* var_30
                sub_10006025(&var_30)
                sub_1000272b(&var_30, 0x1001e57c)
                noreturn
            
            i_1 += 1
            ebx_1 += 0x10
        while (i_1 s< *edi_1)

terminate()
noreturn
