# Testat Nr.1

Ziel ist es eine dynamische Datenstruktur zu erstellen welches es erlaubt Elemente am Ende zu löschen und neu hinzuzufügen. Vergleichen sie hierzu die Funktionalität des ``std::vector``. Zur Bearbeitung der Lösung erstellen Sie zunächst einen Branch ``solution/testat-001`` in Ihrem Fork. Einigen Sie sich hierbei innerhalb welchen Forks Sie in der Gruppe kollaborieren.

Fügen Sie mich ``graugans`` und Ihre Gruppenmitglieder zu diesem Projekt hinzu.

```
# Aktualisieren des Repository
git fetch upstream
# Das wird unsere Basis fuer den Merge Request
git checkout -b testat-001 upstream/testat-001
git push -u origin testat-001

# Der Branch für die Loesung
git checkout -b solution/testat-001 upstream/testat-001

# An die Arbeit
git add ...
git commit ...
git push -u origin solution/testat-001
```

Die Aufgabe ist durch die Gruppe am 12.11 in alfaview zu präsentieren, Dauer der Präsentation 5 Minuten. Anschließend erfolgt eine Durchsprache des Quellcode in GitLab mit dem Dozenten. Hierbei können die Teilnehmer Fragen gestellt bekommen welche Teil der Bewertung sind. Damit die individuelle Leistung erfasst werden kann.


## Aufgabenstellung

Erstellen Sie eine C++ Klasse Vektor zur Ablage von mindestens Integer-Werten.
Ihre Vektor Klasse muss mindestens die folgenden Methoden implementieren:

```cpp
int& at(int pos);
void push_back( int value );
void pop_back();
int size();
void resize(int size);
void clear();
```

Die Elemente sind innerhalb eines dynamischen C-Arrays zu speichern.


### Die Methode at

Liefert eine Kopie des Elementes an der angegebenen Position `pos` zurück. Es ist
zu prüfen ob die Position sich innerhalb des gültigen Wertebereichs befindet.
Finden Sie einen geeigneten Weg um dem Anwender mitzuteilen falls sich die
Position außerhalb des gültigen Wertebereich befindet.

### Die Methode push_back

Mit Hilfe dieser Methode ist es möglich ein neues Element in den Vektor einzufügen. Die Methode `push_back` fügt das Element am Ende des Vektors ein.

### Die Methode pop_back

Diese Methode entfernt den letzten Eintrag aus dem Vektor.

### Die Methode size

Diese Methode liefert die aktuelle Größe des Vektors zurück.

### Die Methode resize

Mittels dieser Methode lässt sich die Größe des Vektors anpassen.

### Die Methode clear

Löscht alle Einträge aus dem Vektor.

### Die std::chrono Bibliothek

Messen Sie die die Laufzeit der Funktionen `push_back`. Verwenden Sie hierzu die `steady_clock`. Um eine aussagekräftige Messung zu bekommen sollten Sie ein größere Anzahl an Elementen einfügen und unterschiedliche Messungen durchführen. 

### Allgemeines

Achten Sie bitte bei der Abgabe auf folgende Punkte:

* [ ] Die Abgabe erfolgt bis spätestens 05.11 und durch eine kurze Präsentation der Teilnehmer in alfaview. (ca. 5 Minuten pro Gruppe)
* [ ] Verwenden Sie git als Quellcodeverwaltung. Die Aufgabe gilt als abgegeben sobald Sie in GitLab einen Merge-request erstellt haben.
* [ ] Die Methoden sind entsprechend dokumentiert.
* [ ] Kommentare und Variablennamen ausschließlich in Englischer Sprache.
* [ ] Verwenden Sie einen durchgängigen Formatierungsstil.

### Pluspunkte

Sie können Ihre Note durch die Umsetzung der folgenden Features deutlich verbessern:

* [ ] Die Gruppe welche die Aufgabe zuerst bearbeitet hat.
* [ ] Implementierung der Operatoren `[]`, `=` und der Copy Constructors.
* [ ] Verwendung von Exceptions.
* [ ] Verwendung von Templates zur Programmierung des Vektors.
* [ ] Ausführliche Auswertung und Interpretation der Testergebnisse. Hierfür dürfen auch PDFs eingecheckt werden.
* [ ] Automatisiertes erzeugen einer API Dokumentation mittels Doxygen.
* [ ] Überraschen Sie mich....
