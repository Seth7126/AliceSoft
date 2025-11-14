// 函数: sub_6a83a0
// 地址: 0x6a83a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char const* const edi = arg5
int32_t i = 0
char var_28 = 0
char var_5 = 0
int32_t eax_1

if (*(edi + 4) s> 0x80)
    eax_1 = arg2[2]
else
    eax_1 = sx.d(arg2[2].b)

if (eax_1 s< 0xffffffff || eax_1 s>= *(edi + 4))
    _inconsistency()
    noreturn

int32_t* esi = arg1
uint32_t* result
int32_t* eax_14
int32_t* ecx
int32_t edx

if (*esi != 0xe06d7363)
    eax_14 = arg3
label_6a86a7:
    
    if (*(edi + 0xc) u<= 0)
        goto label_6a86cb
    
    if (arg6 == 0)
        sub_6a873d(eax_14, edx, ecx, esi, arg2, eax_14, arg4, edi, eax_1, arg7, arg8)
    label_6a86cb:
        result = __getptd()
        
        if (result[0x25] == 0)
            return result
        
        _inconsistency()
        noreturn
else
    if (esi[4] != 3)
    label_6a8501:
        eax_14 = arg3
        arg1 = eax_14
    label_6a850c:
        
        if (*esi != 0xe06d7363 || esi[4] != 3
                || (esi[5] != 0x19930520 && esi[5] != 0x19930521 && esi[5] != 0x19930522))
            goto label_6a86a7
        
        if (*(edi + 0xc) u> 0)
            int32_t var_2c
            int32_t var_14
            void* eax_15 = sub_69e1e6(edi, arg7, eax_1, &var_14, &var_2c)
            int32_t ecx_4 = var_14
            
            if (ecx_4 u< var_2c)
                int32_t* edx_1 = eax_15 + 0x10
                int32_t eax_16 = eax_1
                int32_t* var_18_2 = edx_1
                
                do
                    if (edx_1[-4] s<= eax_16 && eax_16 s<= edx_1[-3])
                        int32_t* var_10_1 = *edx_1
                        int32_t edi_3 = edx_1[-1]
                        int32_t var_24_1 = edi_3
                        edi = arg5
                        
                        if (edi_3 s> 0)
                            int32_t* ecx_5 = var_10_1
                        label_6a85ad:
                            int32_t* eax_18 = *(esi[7] + 0xc)
                            void* edx_2 = &eax_18[1]
                            int32_t eax_19 = *eax_18
                            
                            while (true)
                                if (eax_19 s<= 0)
                                    ecx_5 = &ecx_5[4]
                                    int32_t eax_24 = var_24_1 - 1
                                    var_10_1 = ecx_5
                                    var_24_1 = eax_24
                                    
                                    if (eax_24 s> 0)
                                        goto label_6a85ad
                                    
                                    goto label_6a861e
                                
                                char* eax_20 = *edx_2
                                
                                if (sub_6a8d5e(ecx_5, eax_20, esi[7]) != 0)
                                    int32_t var_50_4 = var_28.d
                                    var_5 = 1
                                    CatchIt(esi, arg2, arg1, arg4, edi, var_10_1, eax_20, 
                                        &edx_1[-4], arg7, arg8)
                                label_6a861e:
                                    edx_1 = var_18_2
                                    eax_16 = eax_1
                                    ecx_4 = var_14
                                    break
                                
                                eax_19 -= 1
                                ecx_5 = var_10_1
                                edx_2 += 4
                    
                    ecx_4 += 1
                    edx_1 = &edx_1[5]
                    var_14 = ecx_4
                    var_18_2 = edx_1
                while (ecx_4 u< var_2c)
        
        if (arg6 != 0)
            ___DestructExceptionObject(esi)
        
        if (var_5 != 0)
            goto label_6a86cb
        
        if ((*edi & 0x1fffffff) u>= 0x19930521 && *(edi + 0x1c) != 0
                && sub_6a8859(esi, *(edi + 0x1c)) == 0)
            __getptd()
            __getptd()
            __getptd()[0x22] = esi
            __getptd()[0x23] = arg1
            void** var_54_8
            
            var_54_8 = arg8 != 0 ? arg8 : arg2
            
            sub_69e296(var_54_8, esi)
            int32_t var_50_10 = 0xffffffff
            ___FrameUnwindToState(arg2, arg4, edi)
            int32_t var_50_11 = *(edi + 0x1c)
            CallUnexpected()
            noreturn
        
        goto label_6a86cb
    
    if (esi[5] == 0x19930520 || esi[5] == 0x19930521)
        if (esi[7] != 0)
            goto label_6a8501
    else if (esi[5] != 0x19930522 || esi[7] != 0)
        goto label_6a8501
    
    result = __getptd()
    
    if (result[0x22] == 0)
        return result
    
    esi = __getptd()[0x22]
    var_28 = 1
    arg1 = __getptd()[0x23]
    
    if (_ValidateRead(esi) == 0)
        _inconsistency()
        noreturn
    
    if (*esi == 0xe06d7363 && esi[4] == 3
            && (esi[5] == 0x19930520 || esi[5] == 0x19930521 || esi[5] == 0x19930522)
            && esi[7] == 0)
        _inconsistency()
        noreturn
    
    uint32_t* eax_6
    eax_6, ecx, edx = __getptd()
    int32_t* eax_8
    char eax_10
    
    if (eax_6[0x25] != 0)
        eax_8 = __getptd()[0x25]
        __getptd()[0x25] = 0
        eax_10, edx = sub_6a8859(esi, eax_8)
        ecx = eax_8
    
    if (eax_6[0x25] == 0 || eax_10 != 0)
        eax_14 = arg1
        goto label_6a850c
    
    if (*eax_8 s> 0)
        void* eax_11 = nullptr
        arg5 = nullptr
        
        do
            if (type_info::operator==(*(eax_11 + eax_8[1] + 4), 
                    &class std::bad_exception `RTTI Type Descriptor') != 0)
                int32_t var_50_8 = 1
                ___DestructExceptionObject(esi)
                arg5 = "bad exception"
                struct std::exception::VTable* var_40
                std::exception::exception(&var_40, &arg5)
                var_40 = &std::bad_exception::`vftable'{for `std::exception'}
                sub_69df2b(&var_40, 0x748244)
                noreturn
            
            i += 1
            eax_11 = &arg5[0x10]
            arg5 = eax_11
        while (i s< *eax_8)
terminate()
noreturn
