#pragma once

#include "StorageInterface.h"
#include "../Entity/Book.h"

namespace Library {

    class InMemoryStorage :
            public StorageInterface {
    public:
        InMemoryStorage();

        ~InMemoryStorage();

        // Inherited via StorageInterface
        virtual bool remove(unsigned long bookId) override;

        virtual bool save(vector<Book> &bookCollection) override;

        virtual bool update(unsigned long bookId, Book &book) override;

        virtual bool reset() override;

        virtual vector<Book> getBooksFromSource() override;

    private:
        vector<Book> books;

    };

}
