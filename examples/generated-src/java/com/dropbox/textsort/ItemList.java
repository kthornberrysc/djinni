// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

package com.dropbox.textsort;

import java.util.ArrayList;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/*package*/ final class ItemList {


    /*package*/ final ArrayList<String> mItems;

    public ItemList(
            @Nonnull ArrayList<String> items) {
        this.mItems = items;
    }

    @Nonnull
    public ArrayList<String> getItems() {
        return mItems;
    }

    @Override
    public String toString() {
        return "ItemList{" +
                "mItems=" + mItems +
        "}";
    }

}
