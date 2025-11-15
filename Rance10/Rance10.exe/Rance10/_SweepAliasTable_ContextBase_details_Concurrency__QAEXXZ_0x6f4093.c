// 函数: ?SweepAliasTable@ContextBase@details@Concurrency@@QAEXXZ
// 地址: 0x6f4093
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
var_8 = nullptr
void** result = Concurrency::details::Hash<class Concurrency::details::_TaskCollection*,class Concurrency::details::_TaskCollection*>::NextList(
    arg1 + 0x80, &var_8)
void** edi = result

if (edi != 0)
    void** i
    
    do
        i = *edi
        
        if (i == 0)
            var_8 += 1
            i = Concurrency::details::Hash<class Concurrency::details::_TaskCollection*,class Concurrency::details::_TaskCollection*>::NextList(
                arg1 + 0x80, &var_8)
        
        result = Concurrency::details::_TaskCollection::_IsStaleAlias(edi[2])
        
        if (result.b != 0)
            void* edi_1 = edi[2]
            var_c = sub_45a7d0(edi_1)
            result = Concurrency::details::Hash<class Concurrency::details::_TaskCollection*,class Concurrency::details::_TaskCollection*>::FindAndDelete(
                arg1 + 0x80, &var_c, nullptr)
            
            if (edi_1 != 0)
                sub_6f4467(edi_1)
                result = operator new(edi_1)
        
        edi = i
    while (i != 0)

return result
