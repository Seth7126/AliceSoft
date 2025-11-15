// 函数: ?ClearAliasTable@ContextBase@details@Concurrency@@QAEXXZ
// 地址: 0x6f3891
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
var_8 = nullptr

while (true)
    void** i = Concurrency::details::Hash<class Concurrency::details::_TaskCollection*,class Concurrency::details::_TaskCollection*>::NextList(
        arg1 + 0x80, &var_8)
    
    if (i == 0)
        break
    
    do
        Concurrency::details::_TaskCollection::_ReleaseAlias(i[2])
        i = *i
    while (i != 0)
    
    var_8 += 1

return sub_6f3000(arg1 + 0x80)
